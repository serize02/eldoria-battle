//
// Created by eserize on 9/11/2024.
//

#ifndef LIFEEMBER_H
#define LIFEEMBER_H
#include "SoulItem.h"


class LifeEmber: public SoulItem {
public:
    void use(Character &character) override;
};



#endif //LIFEEMBER_H
