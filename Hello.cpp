//
// Created by tima on 4.03.21.
//
#include "Hello.h"
#include <cmath>

Hello::Hello() {
    CppFile.open("/home/tima/lang/rez.cpp");
}
void Hello::CreateFile() {
    std::string rez = "\n \n return 0;\n}";
    CppFile << rez;
}

void Hello::AddOperation(std::vector<std::string> tok) {
   if(tok[0] == "create"){
        tok.erase(tok.begin());
        OperationCreate(tok);
   }
   else if(tok[0] == "main") {
       tok.erase(tok.begin());
       OperationMain(tok);
   }
   else if(tok[0] == "summ"){
       tok.erase(tok.begin());
       OperationSumm(tok);
   }
   else if(tok[0] == "diff"){
       tok.erase(tok.begin());
       OperationDiff(tok);
   }
   else if(tok[0] == "mult"){
       tok.erase(tok.begin());
       OperationMult(tok);
   }
   else if(tok[0] == "devide"){
       tok.erase(tok.begin());
       OperationDevide(tok);
   }
   else if(tok[0] == "inpow"){
       tok.erase(tok.begin());
       OperationInPow(tok);
   }
   else if(tok[0] == "insqrt"){
       tok.erase(tok.begin());
       OperationInSqrt(tok);
   }
   else if(tok[0] == "assign"){
       tok.erase(tok.begin());
       OperationAssign(tok);
   }
}

void Hello::    OperationCreate(std::vector<std::string> tok) {
    std::string rez = "";
    if(tok[0] == "INT"){
        rez += "int";
    }else{
        rez += "float";
    }
    for(auto i = 1;i < tok.size();i++){
        rez += " ";
        rez += tok[i];
    }
    rez += ";\n";
    CppFile << rez;
}

void Hello::OperationMain(std::vector<std::string> tok) {
    std::string rez = "#include <iostream>\n #include<cmath>\n int main(){\n";
    CppFile << rez;
}

void Hello::OperationSumm(std::vector<std::string> tok) {
    std::string rez = "";
    for(auto i = 0;i < tok.size();i++){
        rez += " ";
        rez += tok[i];
    }
    rez += ";\n";
    CppFile << rez;
}

void Hello::OperationDiff(std::vector<std::string> tok) {
    std::string rez = "";
    for(auto i = 0;i < tok.size();i++){
        rez += " ";
        rez += tok[i];
    }
    rez += ";\n";
    CppFile << rez;
}

void Hello::OperationMult(std::vector<std::string> tok) {
    std::string rez = "";
    for(auto i = 0;i < tok.size();i++){
        rez += " ";
        rez += tok[i];
    }
    rez += ";\n";
    CppFile << rez;
}

void Hello::OperationDevide(std::vector<std::string> tok) {
    std::string rez = "";
    for(auto i = 0;i < tok.size();i++){
        rez += " ";
        rez += tok[i];
    }
    rez += ";\n";
    CppFile << rez;
}

void Hello::OperationInPow(std::vector<std::string> tok) {
    std::string rez = "";
    rez += tok[0];
    if(tok[1] == "="){
        rez += " ";
        rez += "=";
        rez += " ";
        rez += "pow(";
        rez += tok[2];
        rez += ",";
        rez += tok[4];
        rez += ")";
    }else{
        rez += " ";
        rez += "=";
        rez += " ";
        rez += "pow(";
        rez += tok[0];
        rez += ",";
        rez += tok[2];
        rez += ")";
    }
    rez += ";\n";
    CppFile << rez;
}

void Hello::OperationInSqrt(std::vector<std::string> tok) {
    std::string rez = "";
    for(auto i : tok){
        if(i == "~"){
            rez += "sqrt(";
            continue;
        }
        rez += i;
        rez += " ";
    }
    rez += ");\n";
    CppFile << rez;
}

void Hello::OperationAssign(std::vector<std::string> tok) {
    std::string rez = "";
    for(auto i = 0;i < tok.size();i++){
        rez += " ";
        rez += tok[i];
    }
    rez += ";\n";
    CppFile << rez;
}