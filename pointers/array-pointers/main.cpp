#include <iostream>

int main() {
    int arr[] = {3,4,5,6,7,8};
    int *ptr;
    ptr=arr;

    for (int i = 0; i < 6 ; i++) {
        std::cout << "\nMemory address in position " << i <<  " : "<< (ptr+i);
        std::cout << "\nValue in position " << i << ": " << *(ptr+i);
    }
    return 0;
}