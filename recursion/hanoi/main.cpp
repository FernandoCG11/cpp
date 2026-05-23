#include <iostream>

void hanoi(int n, char origin, char destination, char auxiliar) {
    if (n == 0) return;
    hanoi(n-1, origin, auxiliar, destination);
    std::cout << "Move " << n << " from " << origin << " to " << destination << std::endl;
    hanoi(n-1, auxiliar, destination, origin);
}

int main() {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}