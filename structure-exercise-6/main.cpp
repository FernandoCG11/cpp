#include <iostream>
#include <vector>

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
};

float obtainGPA(const float &a, const float &b, const float &c) {
    return (a+ b + c) /3;
}

int main() {
    int n = 0, pos = 0;
    float maxGPA = 0;
    std::cout << "Enter total of students: ";
    std::cin >> n;
    std::vector<Student> v(n);

    for (int i = 0; i < n; i++) {
        std::cin.ignore();
        std::cout << "Enter student name: ";
        getline(std::cin, v[i].name);

        std::cout << "Enter student gender (Male or Female): ";
        getline(std::cin, v[i].gender);

        std::cout << "Enter first note: ";
        std::cin >> v[i].Avg.firstClass;
        std::cin.ignore();

        std::cout << "Enter second note: ";
        std::cin >> v[i].Avg.secondClass;
        std::cin.ignore();

        std::cout << "Enter third note: ";
        std::cin >> v[i].Avg.thirdClass;
        std::cin.ignore();
        float gpa = obtainGPA(v[i].Avg.firstClass, v[i].Avg.secondClass, v[i].Avg.thirdClass);
        if ( gpa> maxGPA) {
            pos = i;
            maxGPA =gpa;
        }
    }

    // Print data
    std::cout << "\nName: " << v[pos].name;
    std::cout << "\nGender: " << v[pos].gender;
    std::cout << "\nAge: " << v[pos].age;
    std::cout << "\nGPA: " << maxGPA;
    return 0;
}