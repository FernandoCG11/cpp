#include <iostream>

template <typename T>
void printArray(T vec[],int ln) {
    for (int i = 0; i< ln; i++) {
        std::cout << vec[i];
        if (i < ln -1 ) std::cout << ", ";
    }
}

template <typename T>
int partition(T vec[], const int low, const int high) {
    T pivot = vec[high];
    int i = low - 1 ;
    for (int j = low; j <= high - 1; j++) {
        if (vec[j] <= pivot) {
            i++;
            std::swap(vec[i], vec[j]);
        }
    }

    std::swap(vec[ i + 1 ], vec[high]);
    return i + 1;
}

template <typename T>
void quickSort(T vec[], const int low, const int high) {
    if (low < high) {
        const int pi = partition(vec, low, high);
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

int main() {
    double numbers[] = {4,16,77, 45, 10,90,20,1};
    constexpr int ln = std::size(numbers);
    quickSort(numbers, 0, ln - 1);
    printArray(numbers, ln);
    return 0;
}