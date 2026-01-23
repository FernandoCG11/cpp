#include <iostream>

void enterValues(int& x, int &y) {
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
}

void printValues(int& x, int &y) {
    std::cout << "\nx -> " << x;
    std::cout << "\ny -> " << y;
}

void swapValues(int& x, int &y) {
    std::swap(x,y);
}

int main() {
    int a= 0, b= 0;
    enterValues(a,b);
    std::cout << "Original values: ";
    printValues(a,b);
    swapValues(a,b);
    std::cout << "\nSwapped values: ";
    printValues(a,b);
    return 0;
}
