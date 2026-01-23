#include <iostream>
#include <vector>

template <typename T>
void squareNumber(T& i) {
    i *= i;
}

template<typename T, std::size_t N>
void setNumber(T (&v)[N], int ln) {
    for (int i = 0; i < ln; i++) {
        squareNumber(v[i]);
    }
}

template<typename T, std::size_t N>
void printNumbers(T (&v)[N], int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << v[i];
        if (i < ln -1) {
            std::cout << ", ";
        }
    }
}

int main() {
    int v[]= {2,3,4,5,6,7};
    constexpr int ln = std::size(v);
    setNumber(v,ln);
    printNumbers(v,ln);
    return 0;
}