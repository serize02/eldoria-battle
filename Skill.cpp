//
// Created by eserize on 9/11/2024.
//

#include "Skill.h"

Skill::Skill(const string name, const int damage, const int enery_cost)
    : name(name), damage(damage), energy_cost(enery_cost){}

void Skill::use(Character &attacker, Character &enemy) const
{
    enemy.receive_damage(this->damage);
    attacker.reduce_energy(this->energy_cost);
}


