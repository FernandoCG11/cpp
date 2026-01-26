//
// Created by fernando on 1/25/26.
//

#ifndef GET_AND_SET_ANIMAL_H
#define GET_AND_SET_ANIMAL_H
#include <string>


class Dog {
private:
    std::string name;
    int age = 0;
    std::string breed;

public:
    Dog(std::string _name, int _age, std::string _breed);
    void setName(std::string newName);
    std::string getName();
    void setAge(int newAge);
    int getAge();
    void setBreed(std::string newBreed);
    std::string getBreed();
};


#endif //GET_AND_SET_ANIMAL_H