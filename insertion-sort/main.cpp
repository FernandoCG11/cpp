#include <iostream>
void printArray(int numbers[], int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << numbers[i];
        if (i < ln -1) std::cout<<", ";
    }
}
int main() {
    int numbers[] = {5,9,1,3, 4};
    int ln = std::size(numbers);
    for (int i = 1; i < ln ; i++) {
        for (int j = i; j > 0 && (numbers[j - 1] > numbers[j]); j-- ) {
                int aux  = numbers[j];
                numbers[j] = numbers[j - 1];
                numbers[j-1] = aux;
        }
    }
    printArray(numbers, ln);
    return 0;
}