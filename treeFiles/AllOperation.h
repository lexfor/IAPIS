//
// Created by tima on 14.03.21.
//

#ifndef LANG_ALLOPERATION_H
#define LANG_ALLOPERATION_H
#include "MainOperation.h"


class AllOperation : public MainOperation{
private:
    const std::string name = "operation";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation()override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //LANG_ALLOPERATION_H
