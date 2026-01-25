//
// Created by fernando on 1/25/26.
//

#ifndef INTRODUCTION_PERSON_H
#define INTRODUCTION_PERSON_H
#include <string>


class Person {
private:
    // Private members
    int age = 0;
    std::string name;

public:
    Person(int, const std::string&);
    void sayHello();
    void getAge();

protected:
    double salary = 0;
};


#endif //INTRODUCTION_PERSON_H