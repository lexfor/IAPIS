//
// Created by tima on 14.03.21.
//

#ifndef LANG_MAINOPERATION_H
#define LANG_MAINOPERATION_H
#include "Element.h"


class MainOperation : public Element{
private:
    const std::string name = "main";
public:
    bool ParseOperation(std::vector<std::string>)override;
    bool checkOperation()override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //LANG_MAINOPERATION_H
