//
// Created by fernando on 3/3/26.
//

#ifndef PRACTICE_PERSON_H
#define PRACTICE_PERSON_H
#include <string>

class Person {
private:
    std::string name;
    int age{};

public:
    Person(std::string _name, int _age);
    void setName(std::string _name);
    // nodiscard es para que cuando se llame mandar la función el compilador indica que se tiene que usar el valor
    [[nodiscard]] const std::string& getName() const;

    void setAge(int _age);
    [[nodiscard]] int getAge()const;
};


#endif //PRACTICE_PERSON_H