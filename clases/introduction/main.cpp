#include <iostream>

#include "Person.h"

int main() {
    Person p1 = Person(21, "Fernando");
    Person p2(23, "Axel");

    p1.sayHello();
    p2.getAge();
    return 0;
}
