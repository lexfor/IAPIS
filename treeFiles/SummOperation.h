//
// Created by tima on 14.03.21.
//

#ifndef LANG_SUMMOPERATION_H
#define LANG_SUMMOPERATION_H
#include "AllOperation.h"

class SummOperation : public AllOperation{
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "summ";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //LANG_SUMMOPERATION_H
