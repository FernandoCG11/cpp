//
// Created by fernando on 1/25/26.
//

#include "Animal.h"

#include <iostream>
#include <utility>

Animal::Animal(std::string _scientificName, int _age, const std::string& _nativeRegion, std::string _color) : scientificName(std::move(_scientificName)), age(_age),  color(std::move(_color)){};

void Animal::getScientificName() {
    std::cout << "Scientific name: " << scientificName;
}

void Animal::getAge() const {
    std::cout << "Age: " << age;
}

void Animal::getNativeRegion() {
    std::cout << "Native region: " << nativeRegion;
}

void Animal::getColor() {
    std::cout << "Color: " << color;
}
