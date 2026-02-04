#include <iostream>

void enterValues(int* arr, const int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << "Enter value " << (i+1) << ": ";
        std::cin >> arr[i];
    }
}

void printValues(const int* arr, const int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << *arr+i;
        if (i < ln -1) std::cout << ", ";
    }
}

bool isPairNumber(const int* x) {
    if (*x % 2 == 0) return false;
    return true;
}

void printPairNumber(int* x, int pos) {
    if (isPairNumber(x)) {
        std::cout << *x << " is pair number on pos " << pos;
    }
}

void checkArrayVales(int* arr, const int ln) {
    for (int i = 0; i < ln; i++) {
        printPairNumber((arr+i), i+1);
    }
}

int main() {
    int arr[4] ={};
    int ln = std::size(arr);
    enterValues(arr, ln);
    std::cout << "-- Original array --" << std::endl;
    printValues(arr, ln);
    std::cout << "\n ---------------- \n" << std::endl;
    checkArrayVales(arr, ln);
    return 0;
}