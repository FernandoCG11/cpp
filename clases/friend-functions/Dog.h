//
// Created by fernando on 3/19/26.
//

#ifndef FRIEND_FUNCTIONS_DOG_H
#define FRIEND_FUNCTIONS_DOG_H
#include <string>


class Dog {
private:
    std::string name;
    int power{}, atack{};

public:
    Dog(std::string, int, int);
    void showInfo() const;
    friend void modifyData(Dog &, int, int);

};


#endif //FRIEND_FUNCTIONS_DOG_H