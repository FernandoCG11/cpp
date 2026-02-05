//
// Created by fernando on 1/25/26.
//

#ifndef INHERITANCE_DOG_H
#define INHERITANCE_DOG_H
#include "Animal.h"


class Dog : public Animal{
private:
    std::string  name;
    std::string address;
public:
    Dog( std::string, int, const std::string&, std::string, std::string, std::string);
    void getName();
    void getAddress();
};


#endif //INHERITANCE_DOG_H