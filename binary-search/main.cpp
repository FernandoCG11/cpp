#include <algorithm>
#include <iostream>

void printArray(int arr[], int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << arr[i];
        if (i < ln-1) std::cout << ", ";
    }
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


int main() {
    int arr[] = {4,1,0,2,5,3,10,6};
    int ln = std::size(arr);
    quickSort(arr, 0, ln - 1);
    //std::ranges::sort(arr);
    printArray(arr, ln);
    return 0;
}