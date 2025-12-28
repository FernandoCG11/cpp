#include <iostream>

void printArray(int numbers[], int ln){
    for (int i = 0; i < ln; i++) {
        std::cout << numbers[i];
        if (i < ln-1) std::cout << ", ";
    }
}

int main() {
    int numbers[] = {6,1,5,2,3,4,0};
    int ln =  std::size(numbers);

    // Controla los rangos
    for (int gap = ln / 2; gap > 0; gap/=2) {
        // Inicia en la posición del arreglo de acuerdo al rango
        for (int i  = gap; i < ln; i++) {
            // Extraemos el número con el que vamos a hacer las comparaciones
            int temp = numbers[i];
            // j representa la posición del arreglo para hacer las comparaciones independiente a i
            int j = i;
            // Mientras el número anterior de acuerdo al salto es mayor al número actual inicial Y
            while (numbers[j - gap] > temp && j >= gap ) { // Nos ayuda a no acceder a desbordamientos de memoria
                // Intercambiamos
                numbers[j] = numbers[j -gap];
                // Restamos para hacer una nueva comparación
                j-=gap;
            }
            numbers[j] = temp;
        }
    }
    printArray(numbers, ln);
    return 0;
}