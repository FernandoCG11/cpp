#include <iostream>

struct Student {
    std::string name;
    int age = 0;
    float GPA = 0;
};

 void enterValues(Student* ptr, const int ln) {
    for (int i = 0; i < ln; i++) {
        std::cout << "Enter name of student " << i +1 << ": ";
        getline(std::cin,(ptr+i)->name );
        std::cout << "Enter age";

    }
 }

int main() {
    Student students[3];
    Student* prt = students;



    return 0;
}