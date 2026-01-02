#include <iostream>

struct Student {
    std::string name;
    int age = 0;
    float average = 0;
};
int main() {
    Student students[3];
    float bestAvr = 0;
    for (int i = 0; i < 3; i++) {
        std::cout << "\nEnter student " << i +1<< " name: ";
        std::getline(std::cin,students[i].name);
        std::cout << "Enter student " << i + 1 << " age: ";
        std::cin >> students[i].age;
        std::cin.ignore();
        std::cout << "Enter student " << i +1 << " average: ";
        std::cin >> students[i].average;
        std::cin.ignore();

        if (students[i].average > bestAvr) bestAvr = students[i].average;
    }

    for(auto & student : students) {
        std::cout << "\n--------------------------";
        std::cout << "\nName: " << student.name;
        std::cout << "\nAge: " << student.age;
        std::cout << "\nGP: "<< student.average;
    }
    std::cout << "\nBest average: " << bestAvr;
    return 0;
}