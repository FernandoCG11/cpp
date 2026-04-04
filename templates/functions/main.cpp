#include <iostream>

template <typename T, typename N>
[[nodiscard]] T compareNumbers(T x1, N x2) {
    if (x1 < x2) {
        return x2;
    }
    return x1;
}

int main() {
    std::cout << "Greater number: " << compareNumbers(3, 6.4);
    return 0;
}