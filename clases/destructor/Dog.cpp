//
// Created by fernando on 3/17/26.
//


#include "Dog.h"

#include <iostream>
Dog::Dog(std::string name, std::string _race):name(std::move(name)), race(std::move(_race)){}
void Dog::run() {
    std::cout << "Hola bella dama" << this->name;
}
