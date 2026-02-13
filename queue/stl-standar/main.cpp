#include <iostream>
#include <queue>

int main() {
    std::queue<int> stack;

    // push values
    stack.push(30);
    stack.push(40);

    // get first value
    stack.front();

    // get last element
    stack.back();

    // delete element
    stack.pop();
    return 0;
}
