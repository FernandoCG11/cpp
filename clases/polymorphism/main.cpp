#include <iostream>
#include <vector>

#include "Poligon.h"
#include "Triangle.h"
#include "cmake-build-debug/Rectangle.h"

int main() {
    std::vector<Poligon*> v1;
    v1.push_back(new Rectangle(22,33));
    v1.push_back(new Triangle(12,18));

    for (Poligon*& v : v1) {
        std::cout << "Area: " <<v->getArea() << std::endl;
        std::cout << "Perimeter: " << v->getPerimeter() << std::endl;
    };
    return 0;
}
