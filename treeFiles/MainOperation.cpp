//
// Created by tima on 14.03.21.
//

#include "MainOperation.h"

bool MainOperation::ParseOperation(std::vector<std::string> tok) {
    return true;
}

bool MainOperation::checkOperation() {
    return true;
}

void MainOperation::ToString(std::string& str) {
    str +="#include <iostream>\n#include <cmath>\n#include\"Longs.h\"\n\nusing namespace std;\n\nint main(){\n";
    Element::ToString(str);
    str += "return 0;\n}";
}

void MainOperation::show() {
    std::cout << name << "\n";
    Element::show();
}
