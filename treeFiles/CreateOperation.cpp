//
// Created by tima on 14.03.21.
//

#include "CreateOperation.h"
bool CreateOperation::ParseOperation(std::vector<std::string> tok) {
    type = tok[0];
    var.push_back(tok[1]);
    operat = tok[2];
    value = tok[3];
    checkOperation();
    return true;
}

bool CreateOperation::checkOperation() {
    try {
        if(type == "INT"){
            for(auto i : value){
                if(i == '.'){
                    std::string str;
                    str = "Error 4 : trying set int var float value;";
                    throw str;
                }
            }
        }if(type == "FLT"){
            int temp = 0;
            for(auto i : value){
                if(i == '.'){
                    temp++;
                }
            }
            if(temp != 1){
                std::string str;
                str = "Error 5 : trying set float var int value;";
                throw str;
            }
        }
        if(type == "Long"){
            for(auto i : value){
                if(i == '.'){
                    std::string str;
                    str = "Error 6 : trying set long var float value;";
                    throw str;
                }
            }
        }
    }catch(std::string str){
        std::cout << str;
        exit(1);
    }
    return true;
}

void CreateOperation::ToString(std::string &str) {
    if(type == "INT"){
        str += "int";
    }else if(type == "FLT"){
        str += "float";
    }else if(type == "Long"){
        str += "Longs";
    }
    str += " ";
    str += var[0];
    str += " ";
    str += operat;
    str += " ";
    str += value;
    str += ";\n";
}

void CreateOperation::show() {
    std::cout << name;
    Element::show();
}

void CreateOperation::checkVariable(std::vector<std::string> & Str, int Level, std::map<std::string,std::string> & Type,int ID) {
    for(auto i : var){
        for(auto j = 0; j < Str.size();j++)
        {
            if(i == Str[j]){
                if(id != ID){
                    std::pair<std::string,std::string> rez = {i,type};
                    Type.insert(rez);
                }
                Str.erase(Str.begin() + j);
                if(!Str.empty()){
                    j--;
                }
            }
        }
    }
}

void CreateOperation::checkTypes(std::map<std::string, std::string> Types) {
   try{
       for(auto i : Types){
           if(var[0] == i.first){
               std::string str = i.first;
               str = "Error 1488 : var ";
               str += i.first;
               str += " already defined";
               throw(str);
           }
       }
   }catch(std::string str){
       std::cout << str;
       exit(1);
   }
}
