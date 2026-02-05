#include <iostream>

int main() {
    int numbers[] = {4,5,6,7,8};

    int *address = numbers;

    for (int i = 0; i < 5; i++) {
        std::cout << "\nValue: " << *(address+i) << " Address: "<<address++;
    }

    return 0;
}