//
// Created by tima on 14.03.21.
//

#ifndef LANG_ELEMENT_H
#define LANG_ELEMENT_H
#include <vector>
#include <fstream>
#include <iostream>
#include <map>


class Element {
protected:
    Element *prev;
    std::vector<Element*> next;
    std::string name;
    int level;
    std::vector<std::string> var;
    int id;
public:
    virtual bool ParseOperation(std::vector<std::string>);
    virtual bool checkOperation();
    virtual void SetParent(Element*);
    virtual void AddNext(Element*);
    virtual void ToString(std::string&);
    virtual bool checkNext();
    virtual void checkTypes(std::map<std::string,std::string>);
    virtual void checkVariable(std::vector<std::string>&,int, std::map<std::string,std::string>&,int);
    virtual std::vector<std::string> getVariable();
    virtual std::string getName();
    virtual void show();
    virtual void setLevel(int);
    virtual int getLevel();
    virtual Element* getParent();
    virtual void setID(int);
    virtual int getID();
};


#endif //LANG_ELEMENT_H
