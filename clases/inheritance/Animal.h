//
// Created by fernando on 1/25/26.
//

#ifndef INHERITANCE_ANIMAL_H
#define INHERITANCE_ANIMAL_H
#include <string>


class Animal {
private:
    std::string scientificName;
    int age = 0;
    std::string nativeRegion;
    std::string color;

public:
    Animal(std::string, int, const std::string&, std::string);
    void getScientificName();
    void getAge() const;
    void getNativeRegion();
    void getColor();
};


#endif //INHERITANCE_ANIMAL_H