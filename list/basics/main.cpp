#include <iostream>

struct Node {
    int value = 0;
    Node* next{};
};

void insertElement(Node* &list, int n) {
    Node* new_node = new Node();
    new_node->value = n;
    new_node->next = nullptr;

    Node* aux1 = list;
    Node* aux2 = list;

    // Buscar la posición de inserción (aux1) y guardar el nodo anterior (aux2)
    while (aux1 != nullptr && aux1->value < n) {
        aux2 = aux1; // Guardar nodo anterior
        aux1 = aux1->next; // Avanzar en la lista
    }

    if (list == aux1) {
        // Insertar al inicio: o la lista está vacía, o n es menor que todos
        list = new_node;
    } else {
        // Insertar en medio o al final: enlazar después de aux2
        aux2->next = new_node;
    }

    // Conectar nuevo nodo con el resto de la lista
    new_node->next = aux1;
}

int main() {
    
    return 0;
}