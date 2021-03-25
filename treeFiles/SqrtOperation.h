//
// Created by tima on 14.03.21.
//

#ifndef LANG_SQRTOPERATION_H
#define LANG_SQRTOPERATION_H
#include "AllOperation.h"


class SqrtOperation : public AllOperation{
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "sqrt";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
    void checkTypes(std::map<std::string, std::string> Types)override;
};


#endif //LANG_SQRTOPERATION_H
