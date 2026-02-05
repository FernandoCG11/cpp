//
// Created by fernando on 1/25/26.
//

#include "Dog.h"

#include <iostream>
#include <utility>

Dog::Dog(std::string _scientificName, int _age, const std::string& _nativeRegion, std::string _color, std::string _name, std::string _address): Animal(std::move(_scientificName),_age, _nativeRegion, std::move(_color)), name(std::move(_name)), address(std::move(_address)){}

void Dog::getName() {
    std::cout << "Name: " << name;
}
Nodo

void Dog::getAddress() {
    std::cout << "Address: " << address;
}
