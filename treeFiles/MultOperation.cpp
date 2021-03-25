//
// Created by tima on 14.03.21.
//

#include "MultOperation.h"

bool MultOperation::ParseOperation(std::vector<std::string>tok) {
    operands.push_back(tok[0]);
    operat.push_back(tok[1]);
    if(operat[0] == "="){
        operands.push_back(tok[2]);
        operat.push_back(tok[3]);
        operands.push_back(tok[4]);
    }else {
        for (auto i = 2; i < tok.size(); i++) {
            operands.push_back(tok[i]);
        }
    }
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos){
            var.push_back(i);
        }
    }
    return true;
}

bool MultOperation::checkOperation() {
    return true;
}

void MultOperation::ToString(std::string &str) {
    str += operands[0];
    str += " ";
    str += operat[0];
    str += " ";
    if(operat[0] == "="){
        str += operands[1];
        str += " ";
        str += operat[1];
        str += " ";
        str += operands[2];
    }else{
        str += operands[1];
    }
    str += ";\n";
}

void MultOperation::show() {
    std::cout << name;
    Element::show();
}