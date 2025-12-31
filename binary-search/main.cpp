#include <algorithm>
#include <iostream>

void printArray(int arr[], int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << arr[i];
        if (i < ln-1) std::cout << ", ";
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    // -1 a la posicion menor
    int i = low - 1;
    // Para recorrer la posición antes del pivote
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot ) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    // Coloca al pivote en su posición adecuada con base a la posición despúes del último número menor al pivote
    // y retorna su posición*/
    std::swap(arr[i+1], arr[high]);
    return i + 1;
};

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, pi + 1, high);
        quickSort(arr,low , pi - 1);
    }
}
int main() {
    int arr[] = {4,1,0,2,5,3,10,6};
    int ln = std::size(arr);
    //quickSort(arr, 0, ln - 1);
    std::ranges::sort(arr);
    printArray(arr, ln);
    return 0;
}