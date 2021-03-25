//
// Created by tima on 14.03.21.
//

#include "Tree.h"
Tree::Tree() {
    rez.open("/home/tima/lang/rez.cpp");
    root = nullptr;
    count = 0;
}
void Tree::toFile() {
    std::string str;
    root->ToString(str);
    rez.clear();
    if(rez.is_open()){
        rez << str;
    }
    rez.close();
}

void Tree::addElement(std::vector<std::string> tok,int level) {
    bool backLevel = false;
    Element * newElement = nullptr;
    if(tok[0] == "create"){
        tok.erase(tok.begin());
        newElement = new CreateOperation;
        backLevel = true;
    }
    else if(tok[0] == "main") {
        tok.erase(tok.begin());
        newElement = new MainOperation;
    }
    else if(tok[0] == "summ") {
        tok.erase(tok.begin());
        newElement = new SummOperation;
        backLevel = true;
    }
    else if(tok[0] == "diff") {
        tok.erase(tok.begin());
        newElement = new DiffOperation;
        backLevel = true;
    }
    else if(tok[0] == "mult") {
        tok.erase(tok.begin());
        newElement = new MultOperation;
        backLevel = true;
    }
    else if(tok[0] == "devide") {
        tok.erase(tok.begin());
        newElement = new DivOperation;
        backLevel = true;
    }
    else if(tok[0] == "inpow") {
        tok.erase(tok.begin());
        newElement = new PowOperation;
        backLevel = true;
    }
    else if(tok[0] == "insqrt") {
        tok.erase(tok.begin());
        newElement = new SqrtOperation;
        backLevel = true;
    }
    else if(tok[0] == "operation") {
        tok.erase(tok.begin());
        newElement = new AllOperation;
    }
    else if(tok[0] == "assign") {
        tok.erase(tok.begin());
        newElement = new AssignOperation;
        backLevel = true;
    }
    else if(tok[0] == "expr") {
        tok.erase(tok.begin());
        newElement = new AllExpr;
    }
    else if(tok[0] == "for") {
        tok.erase(tok.begin());
        newElement = new ForExpr;
    }
    else if(tok[0] == "if") {
        tok.erase(tok.begin());
        newElement = new IfExpr;
    }
    newElement->setLevel(level);
    newElement->ParseOperation(tok);
    elements.push_back(newElement);

    if(current != nullptr){
        while(current->getLevel() >= newElement->getLevel()){
            current = current->getParent();
        }
        newElement->SetParent(current);
        current->AddNext(newElement);
        newElement->setID(count);
        try{
            std::vector<std::string> temp = newElement->getVariable();
            std::map<std::string,std::string>types;
            root->checkVariable(temp,newElement->getLevel(),types,newElement->getID());
            if(temp.empty()){
                newElement->checkTypes(types);
            }else{
                std::string exc = "Error 1 :undefined variables: ";
                for(auto k : temp){
                    exc += k;
                    exc += " ";
                }
                exc += "\n";
                throw exc;
            }

        }catch(std::string str){
            std::cout << str;
            exit(1);
        }

    }else{
        root = newElement;
        root->SetParent(nullptr);
    }
    if(!backLevel){
        current = newElement;
    }
    count++;
}

void Tree::showTree() {
    root->show();
}
