#include <iostream>

#include "square.h"

int main() {
    Square s1(12,10.4);
    std::cout << "\nThe area is: " << s1.getArea();
    std::cout << "\nThe perimeter is: " << s1.getPerimeter();
    return 0;
}
