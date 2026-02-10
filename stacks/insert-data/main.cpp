#include <iostream>

struct Node {
    int value = 0;
    Node* next = nullptr;
};

void push(Node* &stack, int &n) {
    Node* node = new Node();
    node->value = n;
    node->next=stack;
    stack=node;
}

int pop(Node* &stack) {
    if (stack ==  nullptr) {
        throw std::runtime_error("Stack is empty!");
    }
    int n = stack->value;
    Node* aux = stack;
    stack = stack->next;

    delete aux;
    return n;
}

int top(Node* &stack) {
    return stack->value;
}

void printStack(Node* &stack) {
    if (stack->next == nullptr) {
        return;
    }
    // Print current element
    std::cout << "Value: " << stack->value << " - position: " << stack->next << std::endl;
    return printStack(stack->next);
}
void printUsingWhile(Node* &stack) {
    while (stack->next != nullptr) {
        std::cout << "Value: " << stack->value << " - position: " << stack->next << std::endl;
        stack= stack->next;
    }
}

int main() {
    Node* node = new Node();

    int opt = 1;
    while (opt ==1 || opt == 2) {
        std::cout << "¿Qué función deseas hacer?";
        std::cout << "\n1. Ingresar valores";
        std::cout << "\n2. Eliminar valores";
        std::cout << "\n3. Salir\n-> ";
        std::cin >> opt;

        if (opt == 1) {
            int x = 0;
            std::cout << "Valor: ";
            std::cin >> x;
            push(node, x);
        }
        if (opt ==2) {
            std::cout << "Valor eliminado: " << pop(node) << std::endl;
        }
    }

    std::cout << "Valor top: " << top(node) << std::endl;
    std::cout << "-- Todos los elementos --" << std::endl;
    printStack(node);

    return 0;
}