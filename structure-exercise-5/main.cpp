#include <iostream>

struct Average {
    float firstClass = 0;
    float secondClass = 0;
    float thirdClass = 0;
};

struct Student {
    std::string name;
    std::string gender;
    int age =  0;
    struct Average Avg;
} student;
int main() {
    std::cout << "Enter student name: ";
    getline(std::cin, student.name);

    std::cout << "Enter student gender (Male or Female): ";
    getline(std::cin, student.gender);

    std::cout << "Enter first note: ";
    std::cin >> student.Avg.firstClass;
    std::cin.ignore();

    std::cout << "Enter second note: ";
    std::cin >> student.Avg.secondClass;
    std::cin.ignore();

    std::cout << "Enter third note: ";
    std::cin >> student.Avg.thirdClass;
    std::cin.ignore();

    // Print data
    std::cout << "\nName: " << student.name;
    std::cout << "\nGender: " << student.gender;
    std::cout << "\nAge: " << student.age;
    std::cout << "\nGPA: " << (student.Avg.firstClass + student.Avg.secondClass + student.Avg.thirdClass) / 3;

    return 0;
}