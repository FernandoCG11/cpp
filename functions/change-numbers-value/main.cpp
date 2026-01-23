#include <iostream>
#include <vector>

template<typename T>
void enterValues(std::vector<T>& arr, const int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

template<typename T>
void transformValues(std::vector<T>& arr, const int ln) {
    for (int i = 0; i < ln; i++) {
        arr[i] *= -1;
    }
}

template<typename T>
void printValues(std::vector<T>& arr, const int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << arr[i];
        if (i < ln-1) std::cout << " ,";
    }
}

int main() {
    int n = 0;
    std::cout << "Enter total elements: ";
    std::cin >> n;
    std::vector<int> arr(n);

    enterValues(arr, n);
    std::cout << "\nOriginal array: ";
    printValues(arr,n);
    transformValues(arr,n);
    std::cout << "\nTransformed array: ";
    printValues(arr,n);
    return 0;
}