//
// Created by eserize on 9/11/2024.
//

#ifndef SKILL_H
#define SKILL_H

#include <string>
#include "Character.h"

using std::string;

class Skill {
    string name;
    int damage, energy_cost;
public:
    Skill(string, int,int);
    void use(Character &attacker, Character &enemy) const;
};



#endif //SKILL_H
