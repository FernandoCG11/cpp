//
// Created by fernando on 3/19/26.
//

#include "Dog.h"

#include <iostream>
#include <utility>

Dog::Dog(std::string name, int power, int attack): name(std::move(name)), power(power), attack(attack) {
}

void Dog::showInfo() const {
    std::cout << "\nName: " << this->name;
    std::cout << "\nPower: " << this->power;
    std::cout << "\nAttack: " << this->attack;
}
