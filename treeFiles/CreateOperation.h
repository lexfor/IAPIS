//
// Created by tima on 14.03.21.
//

#ifndef LANG_CREATEOPERATION_H
#define LANG_CREATEOPERATION_H
#include "AllOperation.h"


class CreateOperation : public AllOperation{
private:
    std::string type;
    std::string value;
    std::string operat;
    const std::string name = "create";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string&)override;
    void show() override;
    void checkVariable(std::vector<std::string>&,int,std::map<std::string,std::string>&,int)override;
    void checkTypes(std::map<std::string,std::string>)override;
};


#endif //LANG_CREATEOPERATION_H
