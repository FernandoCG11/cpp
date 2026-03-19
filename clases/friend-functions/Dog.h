//
// Created by fernando on 3/19/26.
//

#ifndef FRIEND_FUNCTIONS_DOG_H
#define FRIEND_FUNCTIONS_DOG_H
#include <string>


class Dog {
public:
    std::string name;
    int power{}, attack{};

public:
    Dog(std::string, int, int);
    void showInfo() const;
    friend void modifyData(Dog&,std::string, int, int);

};


#endif //FRIEND_FUNCTIONS_DOG_H