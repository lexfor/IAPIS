//
// Created by tima on 16.03.21.
//

#include "ForExpr.h"

bool ForExpr::ParseOperation(std::vector<std::string> tok) {
    operands.push_back(tok[2]);
    operands.push_back(tok[4]);
    operat = tok[5];
    operands.push_back(tok[6]);
    operands.push_back(tok[8]);
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos){
            var.push_back(i);
        }
    }
    try {
        if(checkOperation()){

        }else{
            std::string str = "Error 2 : all vars in cycle must be the same\n";
            throw str;
        }
    }catch(std::string str){
        std::cout << str;
        exit(2);
    }
}

bool ForExpr::checkOperation() {
    for(auto i : var){
        for(auto j : var){
            if(i != j){
                return false;
            }
        }
    }
    return true;
}

void ForExpr::ToString(std::string &str) {
    str += "for (";
    str += " ";
    str += operands[0];
    str += ";";
    str += " ";
    str += operands[1];
    str += " ";
    str += operat;
    str += " ";
    str += operands[2];
    str += ";";
    str += " ";
    str += operands[0];
    str += " ";
    str += "+=";
    str += " ";
    str += operands[3];
    str += ")";
    str += "{\n";
    Element::ToString(str);
    str += "}\n";
}

void ForExpr::show() {
    std::cout << name;
    Element::show();
}
