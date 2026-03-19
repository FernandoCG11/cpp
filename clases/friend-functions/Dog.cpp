//
// Created by fernando on 3/19/26.
//

#include "Dog.h"

#include <iostream>
#include <utility>

Dog::Dog(std::string name, int power, int atack): name(std::move(name)), power(power), atack(atack) {
}

void Dog::showInfo() const {
    std::cout << "Name: " << this->name;
    std::cout << "\nPower: " << this->power;
    std::cout << "\nAtack: " << this->atack;
}
