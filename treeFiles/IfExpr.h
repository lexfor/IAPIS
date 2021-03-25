//
// Created by tima on 16.03.21.
//

#ifndef LANG_IFEXPR_H
#define LANG_IFEXPR_H
#include "AllExpr.h"

class IfExpr : public AllExpr{
private:
    std::vector<std::string> operands;
    std::string operat;
    const std::string name = "if";
public:
    bool ParseOperation(std::vector<std::string>)override;
    bool checkOperation()override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //LANG_IFEXPR_H
