//
// Created by eserize on 9/11/2024.
//

#include "Character.h"

void Character::attack(Character &enemy) const
{
    enemy.receive_damage(this->damage);
}

void Character::receive_damage(const int damage)
{
    this->life_points -= damage;
}

bool Character::is_alive() const
{
    return this->life_points > 0;
}

void Character::level_up()
{
    this->level++;
}

void Character::reduce_energy(const int energy_cost)
{
    this->energy -= energy_cost;
}

void Character::restore_energy(const int energy_points)
{
    this->energy += energy_points;
}

void Character::restore_life(const int life_points)
{
    this->life_points += life_points;
}



