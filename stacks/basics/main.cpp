#include <iostream>

struct Node {
    int value = 0;
    Node* next{};
};

void pushStack(Node* &stack, int n) {
    Node *new_node = new Node(); // Create new stack
    new_node->value = n;
    new_node->next=stack;
    stack =new_node;
}

auto popStack(Node* &stack, int &n) {
    if (stack == nullptr) {
        throw std::runtime_error("Stack is empty!");
    }
    Node* aux = stack;
    n = stack->value;
    stack = stack->next;
    delete aux;
    return n;
}

auto topStack(Node* &stack) {
    return stack->value;
}
int main() {
    Node stack = {10, nullptr};
    Node* ptrStack = &stack;
    pushStack(ptrStack, 30);
    pushStack(ptrStack, 20);
    pushStack(ptrStack, 10);

    std::cout << "Top stack: " << topStack(ptrStack);
    return 0;
}