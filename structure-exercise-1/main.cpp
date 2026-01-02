#include <iostream>

struct Runner {
 std::string name;
    int age = 0;
    std::string gender;
    std::string club;
    std::string category;
};

int main() {
    Runner runnerOne;

    std::cout << "Enter runner name: "; std::getline(std::cin, runnerOne.name);
    std::cout << "Enter runner age: ";std::cin >> runnerOne.age;
    std::cin.ignore();
    std::cout << "Enter runner club: ";std::getline(std::cin,runnerOne.club) ;
    if (runnerOne.age <= 18) {
        runnerOne.category = "Juvenil";
    }
    if (runnerOne.age > 18 && runnerOne.age <= 40) {
        runnerOne.category = "Señor";
    }
    if (runnerOne.age > 40) {
        runnerOne.category = "Veterano";
    }

    std::cout << "Runner Data: ";
    std::cout << "\nName: "<< runnerOne.name;
    std::cout << "\nAge: " << runnerOne.age;
    std::cout << "\nClub: " << runnerOne.club;
    std::cout << "\nCategory: "<< runnerOne.category;
    return 0;
}