#include <iostream>

int main() {

    // Declare pointer
    int num = 41;
    int *dir = &num;

    std::cout << "Value: "<< num;
    std::cout << "\nMemory address: " << dir;
    std::cout << "\nValue by dir: "  << *dir;

    // Access memory dir
    // &num;
    // Access value
    // *dir;


    return 0;
}