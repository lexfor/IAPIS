//
// Created by tima on 14.03.21.
//

#include "Element.h"

bool Element::ParseOperation(std::vector<std::string> tok) {
    return true;
}

bool Element::checkOperation() {
    for(auto i : next){
        i->checkOperation();
    }
    return true;
}

void Element::SetParent(Element * el) {
    prev = el;
}

void Element::AddNext(Element * el) {
    next.push_back(el);
}

void Element::ToString(std::string& str) {
    for(auto i : next){
        i->ToString(str);
    }
}

bool Element::checkNext() {
    return !next.empty();
}

void Element::show() {
    for(auto i : next){
        i->show();
    }
}

void Element::setLevel(int Level) {
    level = Level;
}

int Element::getLevel() {
    return level;
}

Element *Element::getParent() {
    return prev;
}

std::vector<std::string> Element::getVariable() {
    return var;
}

std::string Element::getName() {
    return name;
}

void Element::checkVariable(std::vector<std::string> & Var, int Level, std::map<std::string,std::string>& Type,int ID){
    if(level >= Level){
    }
    else{
        for(auto i : next){
            i->checkVariable(Var,Level,Type,ID);
        }
    }
}

void Element::checkTypes(std::map<std::string, std::string> Types) {

}

void Element::setID(int ID) {
    id = ID;
}

int Element::getID() {
    return id;
}
