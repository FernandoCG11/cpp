#include <iostream>
#include <memory>

#include "Person.h"

int main() {
    Person p1{"axel", 22};
    std::cout << "Person name: " << p1.getName() << std::endl;

    // Using smart pointers
    auto obj = std::make_unique<Person>("Fernando",21);
    std::cout << obj->getAge();
    return 0;
}
