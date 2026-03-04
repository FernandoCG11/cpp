//
// Created by fernando on 3/3/26.
//

#include "Person.h"

#include <string>
#include <utility>

Person::Person(std::string _name, int _age) : name(std::move(_name)), age(_age){};

void Person::setAge(int _age) {
    this->age = _age;
}

int Person::getAge() const {
    return this->age;
}

void Person::setName(std::string _name) {
    this->name = std::move(_name);
}

const std::string& Person::getName() const {
    return this->name;
}

