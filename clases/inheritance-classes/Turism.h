//
// Created by fernando on 3/25/26.
//

#ifndef INHERITANCE_CLASSES_TURISM_H
#define INHERITANCE_CLASSES_TURISM_H
#include "Vehicle.h"


class Turism : public Vehicle {
private:
    std::string name;

public:
    Turism(std::string brand, int model, std::string color, std::string name);
    [[nodiscard]] std::string getName()const;
};


#endif //INHERITANCE_CLASSES_TURISM_H