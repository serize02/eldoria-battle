//
// Created by eserize on 9/11/2024.
//

#include "SpiritDrop.h"

void SpiritDrop::use(Character& character)
{
    character.restore_energy(this->energy_restore_points_);
    character.restore_life(this->life_restore_points_);
}
