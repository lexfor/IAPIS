//
// Created by tima on 14.03.21.
//

#include "PowOperation.h"
bool PowOperation::ParseOperation(std::vector<std::string> tok) {
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

bool PowOperation::checkOperation() {
    return true;
}

void PowOperation::ToString(std::string & str) {
    str += operands[0];
    if(operat[0] == "="){
        str += " ";
        str += "=";
        str += " ";
        str += "pow(";
        str += operands[1];
        str += ",";
        str += operands[3];
        str += ")";
    }else{
        str += " ";
        str += "=";
        str += " ";
        str += "pow(";
        str += operands[0];
        str += ",";
        str += operands[1];
        str += ")";
    }
    str += ";\n";
}

void PowOperation::show() {
    std::cout << name;
    Element::show();
}


void PowOperation::checkTypes(std::map<std::string, std::string> Types) {
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


