#include <iostream>


struct Node {
    int value = 0;
    Node* next{};
};

void push(Node* &front,Node* &rear, int n) {
    Node* new_node = new Node();
    new_node->value =n;
    new_node->next = nullptr;

    // Cuando esta vacía, el nuevo nodo pasa a ser el
    if (front == nullptr) {
        front = new_node;
    } else { // Aquí encolamos el nuevo nodo con el úlimo nodo del momento
        rear->next = new_node;
    }
    // El nuevo nodo se convierte el final
    rear=new_node;
}

int pop(Node* &front, Node* &rear) {
    if (front == nullptr) {
        throw std::runtime_error("Queue is empty!");
    }
    if (front == rear) {
        front = nullptr;
        rear = nullptr;
    }

    Node* tem = front;
    int x = front->value;
    front = front->next;
    delete tem;
    return x;
}

void top(Node* &start) {
    if (start==nullptr) {
        throw std::runtime_error("Queue is empty!");
    }
    std::cout << start->value;
}

void getElements(Node* &stack) {
    if (stack==nullptr) {
        return;
    }
    std::cout << "Value: "<< stack->value << " - position: " << stack;
    getElements(stack->next);
}

int main() {
    int response = 1;
    while (response) {

    }
    return 0;
}