#include <iostream>

void printArray(int array[], int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << array[i];
        if (i < ln - 1) std::cout << ", ";
    }
};

int partition(int array[], int low, int high) {
    int pivot = array[high];

    // Pivot position
    int i = low -1;

    // Check minor numbers than pivot
    for (int j = low; j < high; j++) {
        if (array[j]< pivot) {
            i++;
            // Change position between elements of the array
            std::swap(array[i], array[j]);
        }
    }

    // After that process it's necessary to put the correct position of pivot
    std::swap(array[i +1], array[high]);

    // This is new pivot position that will be used as reference in the future whit recursivity
    return i + 1;
}

void quickSort(int array[], int low,int high) {
    // This is the fisrt case, if low is major or equal than high
    // Ended when low and high search in only one position of array
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, pi + 1, high);
        quickSort(array, low , pi -1 );
    }
}
int main() {
    int numbers[] = {5,3,2,90,1,7,0};
    int ln = std::size(numbers);

    std::cout << "Original array: ";
    printArray(numbers, ln);  std::cout <<"\n";

    quickSort(numbers, 0, ln - 1);
    std::cout << "Sorted array: " ;
    printArray(numbers, ln);
    return 0;
}