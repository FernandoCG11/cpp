#include <iostream>

struct Person {
    std::string name;
    int age=0;
};

int main() {
    Person one;
    one.name = "";
    one.age = 2;
    return 0;
}