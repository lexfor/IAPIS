//
// Created by tima on 14.03.21.
//

#include "AllOperation.h"

bool AllOperation::ParseOperation(std::vector<std::string> tok) {
    return true;
}

bool AllOperation::checkOperation() {
    return true;
}

void AllOperation::ToString(std::string & str) {
    Element::ToString(str);
}

void AllOperation::show() {
    std::cout << name;
    Element::show();
    std::cout << "\n";
}
