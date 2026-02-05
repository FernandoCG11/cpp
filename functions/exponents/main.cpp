#include <iostream>

void enterValues(int& x, int& n) {
    std::cout << "Enter x (base) value: ";
    std::cin >> x;
    std::cout << "Enter n value: ";
    std::cin >> n;
}

int exponentNumber(const int x, const int n) {
    if (n == 1) {
        return x;
    }
    return x * exponentNumber(x,n - 1 );
}

int main() {
    int x = 0, n = 0, total = 0;
    enterValues(x,n);
    total = exponentNumber(x,n);
    std::cout << "Total: " << total;
    return 0;
}