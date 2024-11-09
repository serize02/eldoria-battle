//
// Created by eserize on 9/11/2024.
//

#include "LifeEmber.h"

void LifeEmber::use(Character &character) {
    character.restore_energy(50);
    character.restore_life(100);
}
