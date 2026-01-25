//
// Created by fernando on 1/25/26.
//

#include "Person.h"

#include <iostream>

Person::Person(int _age, const std::string& _name) {
    age = _age;
    name = _name;
}

void Person::sayHello() {
    std::cout << "\nHi, my name is " << name << "!!";
}

void Person::getAge() {
    std::cout << "\n and my age is " << age;
}
