#include <iostream>

int main() {
    int numbers[] = {5,9,1,3};
    int ln = std::size(numbers);
    for (int i = 1; i < ln ; i++) {
        for (int j = i; j > 1; j--) {
            if (numbers[j -1] > numbers[j] ) {
                int aux  = numbers[j - 1];
                numbers[j-1] = numbers[j];
                numbers[j] = aux;
            }
        }
    }
    return 0;
}