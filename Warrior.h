//
// Created by eserize on 9/11/2024.
//

#ifndef WARRIOR_H
#define WARRIOR_H
#include <vector>

#include "Character.h"

using std::vector;

class Warrior: public Character {

    int experience;

public:
    void gain_experience(int exp);
};



#endif //WARRIOR_H
