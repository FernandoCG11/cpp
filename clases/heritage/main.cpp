#include <iostream>

#include "Triangle.h"

int main() {
    Triangle t1{3, 4,3, 4};
    std::cout << "Sides: " <<t1.getNSides() << std::endl;
    std::cout << "Area: " << t1.getArea()<< std::endl;
    return 0;
}
