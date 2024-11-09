//
// Created by eserize on 9/11/2024.
//

#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "Character.h"

using std::string;

class SoulItem {
    string name;
public:
    virtual void use(Character& character) = 0;
};



#endif //ITEM_H
