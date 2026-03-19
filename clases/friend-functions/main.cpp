#include <iostream>
#include <memory>

#include "Dog.h"

void modifyData(Dog &animal, std::string name, int power, int attack) {
    animal.name = std::move(name);
    animal.power = power;
    animal.attack = attack;
}

int main() {
    Dog d1{"Cuisín", 12, 20};
    d1.showInfo();

    auto d2 = std::make_unique<Dog>("Pancho", 23, 20);
    d2->showInfo();

    modifyData(d1, "N_Cuisín", 24, 78);
    d1.showInfo();

    modifyData(*d2, "N_Pancho", 34,67);
    d2->showInfo();
    return 0;
}
