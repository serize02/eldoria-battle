//
// Created by eserize on 9/11/2024.
//

#include "Skill.h"

void Skill::use(Character &attacker, Character &enemy) const
{
    enemy.receive_damage(this->damage);
    attacker.reduce_energy(this->energy_cost);
}


