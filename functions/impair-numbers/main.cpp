#include <cmath>
#include <iostream>

bool primeNumber(int& n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n) + 1; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void checkNumbers(int (&arr)[4], int ln) {
    for (int i = 0; i < ln; i++) {
        if (primeNumber(arr[i])) {
            std::cout << arr[i] << " is prime number.\n";
        };
    }
}

int main() {
    int arr[] = {2, 4,3, 7};
    checkNumbers(arr, 4);
    return 0;
}