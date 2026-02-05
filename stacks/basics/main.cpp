#include <iostream>

struct Node {
    int data = 0 ;
    Node *next{};
};

void addStack(Node *&stack, int n) {
    Node *new_node = new Node();
    new_node->data=n;
    new_node->next = stack;
    stack = new_node;
}
int main() {
    Node *stack = nullptr;
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    addStack(stack,n);
    return 0;
}