//
// Created by tima on 4.03.21.
//

#ifndef LANG_HELLO_H
#define LANG_HELLO_H
#include <fstream>
#include <vector>
#include <string>

class Hello {
public:
    Hello();
    void CreateFile();
    void AddOperation(std::vector<std::string>);
private:
    void OperationCreate(std::vector<std::string>);
    void OperationMain(std::vector<std::string>);
    void OperationSumm(std::vector<std::string>);
    void OperationDiff(std::vector<std::string>);
    void OperationMult(std::vector<std::string>);
    void OperationDevide(std::vector<std::string>);
    void OperationInPow(std::vector<std::string>);
    void OperationInSqrt(std::vector<std::string>);
    void OperationAssign(std::vector<std::string>);
    std::ofstream CppFile;
};


#endif //LANG_HELLO_H
