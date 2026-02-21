#include <iostream>

struct Node {
    int value = 0;
    Node* right{};
    Node* left{};
};

Node* createNode(int n) {
    Node* new_node = new Node();
    new_node->value = n;
    return new_node;
}

void insertNode(Node* &tree, int n) {
    // Validar sí es el primer nodo
    if (tree == nullptr) {
        tree = createNode(n);
    }

    if (tree->value > n) {
        insertNode(tree->left, n);
    }

    if (tree->value < n) {
        insertNode(tree->right,n);
    }
}

int main() {
    Node* tree{};
    int n = 0;
    std::cout << "Insert value: ";
    std::cin >> n;
    insertNode(tree,n);
    return 0;
}