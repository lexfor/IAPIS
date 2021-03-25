//
// Created by tima on 14.03.21.
//

#include "SqrtOperation.h"

bool SqrtOperation::ParseOperation(std::vector<std::string> tok) {
    operands.push_back(tok[0]);
    operat.push_back(tok[1]);
    operat.push_back(tok[2]);
    operands.push_back(tok[3]);
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos){
            var.push_back(i);
        }
    }
    return true;
}

bool SqrtOperation::checkOperation() {
    return true;
}

void SqrtOperation::ToString(std::string & str) {
    str += operands[0];
    str += operat[0];
    str += "sqrt(";
    str += operands[1];
    str += ")";
    str += "\n";
}

void SqrtOperation::show() {
    std::cout << name;
    Element::show();
}


void SqrtOperation::checkTypes(std::map<std::string, std::string> Types) {
    try {
        for(auto i = 0;i < var.size();i++){
            if(Types[var[i]] == "Long"){
                std::string str;
                str = "Error 10 : trying to set Long in pow;";
                throw str;
            }
        }
    }catch(std::string str){
        std::cout << str;
        exit(1);
    }
}
