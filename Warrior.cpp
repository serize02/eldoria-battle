//
// Created by eserize on 9/11/2024.
//

#include "Warrior.h"

Warrior::Warrior(const string& name): Character(name), experience(0){}

void Warrior::gain_experience(int exp)
{
    this->experience += exp;
}
