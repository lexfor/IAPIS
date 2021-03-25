//
// Created by tima on 16.03.21.
//

#ifndef LANG_ALLEXPR_H
#define LANG_ALLEXPR_H
#include "MainOperation.h"


class AllExpr : public MainOperation {
private:
    const std::string name = "expr";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation()override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //LANG_ALLEXPR_H
