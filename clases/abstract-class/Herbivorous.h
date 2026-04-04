//
// Created by fernando on 4/4/26.
//

#ifndef ABSTRACT_CLASS_HERBIVOROUS_H
#define ABSTRACT_CLASS_HERBIVOROUS_H
#include <iostream>

#include "LivingOrganism.h"


class Herbivorous: public LivingOrganism{
    void feedOneself() override;
};


#endif //ABSTRACT_CLASS_HERBIVOROUS_H