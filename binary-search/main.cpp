#include <algorithm>
#include <iostream>

void printArray(int arr[], int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << arr[i];
        if (i < ln-1) std::cout << ", ";
    }
    std::cout << "\n";
}

int partition(int arr[], int low, int high) {
    int i = low - 1;
    int pivot = arr[high];

    // Se recorre hasta la posición que esta antes del pivote
    for (int j = low; j <=  high -1 ; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i + 1 ;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int  binarySort(const int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;
        }


        if (x < arr[mid]) {
            return binarySort(arr, low, mid - 1, x);
        }

        if (x > arr[mid]) {
            return binarySort(arr, mid+1, high, x);
        }
    }
    return -1;
}

int main() {
    int arr[] = {42, 7, 89, 13, 56, 3, 71, 28, 64, 9};
    int ln = std::size(arr);
    quickSort(arr, 0, ln - 1);
    //std::ranges::sort(arr);
    printArray(arr, ln);

    // Número a buscar igual a 3
    int result = binarySort(arr, 0, ln - 1, 89 );

   if (result == -1) std::cout << "Number not found";
   else std::cout << "Position: " << result;

    return 0;
}