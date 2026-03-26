#include <iostream>

#include "Turism.h"
#include "Vehicle.h"

int main() {
    Turism t1 {"Volvo", 2020, "Red", "McQueen"};
    std::cout << t1.getBrand()<< std::endl;
    return 0;
}
