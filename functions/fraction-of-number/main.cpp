#include <iostream>

void enterValue(double& x) {
    std::cout << "Enter x value: ";
    std::cin >> x;
}

void fractionNumber(double& x) {
    std::cout << "Fraction: " << x - static_cast<int>(x);
}

int main() {
    double x = 0;
    enterValue(x);
    fractionNumber(x);
    return 0;
}