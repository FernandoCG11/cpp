#include <cmath>
#include <iostream>

bool isPrimeNumber(const int *num) {
    if (*num <= 1) return false;
    for (int i = 2; i <= std::sqrt(*num) + 1; i++) {
        if (*num % i == 0) return false;
    }
    return true;
}

int main() {
    int x = 0, *dir;
    std::cout << "Enter value: ";
    std::cin >> x;
    dir = &x;
    if (isPrimeNumber(dir)) {
        std::cout << *dir << " is prime number";
    };
    return 0;
}