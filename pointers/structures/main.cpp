#include <iostream>

struct Person {
    std::string name;
    int age = 0;
};
    Person person = {};
    Person* ptr = &person;

void enterValue() {
    std::cout << "Enter name: ";
    getline(std::cin, ptr->name);
    std::cout << "Enter age: ";
    std::cin >> ptr->age;
}

void printData() {
    std::cout << "Name: " << ptr->name;
    std::cout << "\nAge: " << ptr->age;

}
int main() {
    enterValue();
    printData();
    return 0;
}