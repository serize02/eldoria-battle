//
// Created by eserize on 9/11/2024.
//

#include "SpiritDrop.h"

SpiritDrop::SpiritDrop(const int energy_restore_points_, const int life_restore_points_)
    : energy_restore_points_(energy_restore_points_), life_restore_points_(life_restore_points_){}

void SpiritDrop::use(Character& character)
{
    character.restore_energy(this->energy_restore_points_);
    character.restore_life(this->life_restore_points_);
}
