//
// Created by fernando on 3/17/26.
//

#ifndef DESTRUCTOR_DOG_H
#define DESTRUCTOR_DOG_H
#include <string>

class Dog {
private:
    std::string name,race;

public:
    Dog(std::string _name, std::string _race);
    ~Dog()=default;
    void run();
};


#endif //DESTRUCTOR_DOG_H