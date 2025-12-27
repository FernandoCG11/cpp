#include <iostream>

void printArray(int numbers[], int ln) {
    for (int i =0; i < ln; i++) {
        std::cout << numbers[i];
        if (i < ln -1) std::cout << ", ";
    }
}
int main() {
    int numbers[] = {4,7,2,10,3,1,5};
    int ln = std::size(numbers) ;

    for (int i = 0; i < ln-1; i++) {
        int minIndex = i;
        for (int j = i +1; j < ln; ++j) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
    std::swap(numbers[i], numbers[minIndex]);
    }
    printArray(numbers, ln);
    return 0;
}