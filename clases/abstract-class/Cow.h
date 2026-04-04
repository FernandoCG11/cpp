//
// Created by fernando on 4/4/26.
//

#ifndef ABSTRACT_CLASS_COW_H
#define ABSTRACT_CLASS_COW_H
#include "Herbivorous.h"


class Cow: public Herbivorous {
public:
    void feedOneself() override {
        std::cout << "The cow is eating" << std::endl;
    };
};


#endif //ABSTRACT_CLASS_COW_H