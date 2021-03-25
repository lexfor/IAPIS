//
// Created by tima on 16.03.21.
//

#include "AllExpr.h"

void AllExpr::show() {
    std::cout << name;
    Element::show();
    std::cout << "\n";
}

bool AllExpr::checkOperation() {
    return MainOperation::checkOperation();
}

void AllExpr::ToString(std::string & str) {
    Element::ToString(str);
}

bool AllExpr::ParseOperation(std::vector<std::string> str) {
    return true;
}
