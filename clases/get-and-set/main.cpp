#include <iostream>

#include "Animal.h"

int main() {
    Dog d1("raul", 6, "Doberman");
    d1.setBreed("Pitnull");
    std::cout << d1.getBreed();
    return 0;
}
