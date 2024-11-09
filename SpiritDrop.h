//
// Created by eserize on 9/11/2024.
//

#ifndef SPIRITDROP_H
#define SPIRITDROP_H

#include "SoulItem.h"

class SpiritDrop: public SoulItem {
    int energy_restore_points_;
    int life_restore_points_;

public:
    void use(Character &character) override;
};



#endif //SPIRITDROP_H
