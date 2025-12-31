#include <iostream>

int main() {
    int numbers[] = {2,5,8,9,1,0};

    std::cout << "Enter a number to search: ";
    int value;
    std::cin >> value;

    bool found = false;
    std::size_t i = 0;
    while (!found && i < std::size(numbers)) {
        if (numbers[i] == value) {
            found= true;
        }
        i++;
    }
    found ? std::cout << "Number found": std::cout << "Number not found";
    return 0;
}