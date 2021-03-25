//
// Created by tima on 16.03.21.
//

#include "IfExpr.h"

bool IfExpr::ParseOperation(std::vector<std::string> tok) {
    operands.push_back(tok[2]);
    operat = tok[3];
    operands.push_back(tok[4]);
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos){
            var.push_back(i);
        }
    }
    return true;
}

bool IfExpr::checkOperation() {
    return true;
}

void IfExpr::ToString(std::string & str) {
    str += "if (";
    str += " ";
    str += operands[0];
    str += " ";
    str += operat;
    str += " ";
    str += operands[1];
    str += ")";
    str += "{\n";
    Element::ToString(str);
    str += "}\n";
}

void IfExpr::show() {
    std::cout << name;
    Element::show();
}
