//
// Created by fernando on 1/25/26.
//

#include "Animal.h"

#include <utility>

Dog::Dog(std::string _name, int _age, std::string _breed) {
    name = std::move(_name);
    age= _age;
    breed = std::move(_breed);
}

void Dog::setName(std::string newName) {
    name = std::move(newName);
}

std::string Dog::getName() {
    return name;
}

void Dog::setAge(int newAge) {
    age = newAge;
}

int Dog::getAge() {
    return age;
}

void Dog::setBreed(std::string newBreed) {
    breed = std::move(newBreed);
}

std::string Dog::getBreed() {
    return breed;
}
