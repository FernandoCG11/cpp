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

bool findElement(Node* &tree, int n) {
    if (tree == nullptr) {
        return false;
    }
    if (tree->value == n) {
        return true;
    }

    if (tree->value > n ) {
        return findElement(tree->left, n);
    }
    return findElement(tree->right, n);
}

void preOrder(Node* &tree) {
    if (tree == nullptr) {
        return;
    }
    std::cout << tree->value << " - ";
    preOrder(tree->left);
    preOrder(tree->right);
}

void inOrder(Node* tree) {
    if (tree == nullptr) {
        return;
    }
    inOrder(tree->left);
    std::cout << tree->value << " - ";
    inOrder(tree->right);
}

void postOrder(Node* tree) {
    if (tree == nullptr) {
        return;
    }
    postOrder(tree->left);
    postOrder(tree->right);
    std::cout << tree->value << " - ";
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

   // std::cout << "Enter value to find it: ";
   // std::cin >> n;
    //findElement(tree, n);
    std::cout << "PreOrder: " << std::endl;
    preOrder(tree);
    std::cout << "\nInOrder: " << std::endl ;
    inOrder(tree);
    return 0;
}