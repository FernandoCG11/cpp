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

void showTree(Node* &tree, int counter) {
    if (tree == nullptr) {
        return;
    }

    showTree(tree->right, counter+1);
    for (int i = 0; i < counter; i++) {
        std::cout << " ";
    }
    std::cout << tree->value<<std::endl;
    showTree(tree->left,counter+1);
}

int main() {
    Node* tree{};
    int n = 0;
    std::cout << "Insert value: ";
    std::cin >> n;
    insertNode(tree,n);
    insertNode(tree,12);
    insertNode(tree,7);
    insertNode(tree,8);
    insertNode(tree,3);
    insertNode(tree,2);
    insertNode(tree,1);
    showTree(tree, 0);
    return 0;
}