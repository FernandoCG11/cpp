#include <iostream>

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int sumPages(int pages[], int ln) {
    if (ln == 0) return pages[0];
    return pages[ln] + sumPages(pages, ln-1);
}

int main() {
    std::cout << "Factorial value: " << factorial(4) <<std::endl;

    int pages[] = {2,3,4,6};
    std::cout << "Sum pages: " << sumPages(pages, 3) << std::endl;
    return 0;
}