//
// Created by fernando on 3/25/26.
//

#ifndef INHERITANCE_CLASSES_VEHICLE_H
#define INHERITANCE_CLASSES_VEHICLE_H
#include <string>


class Vehicle {
private:
    std::string brand;
    int model{};
    std::string color;

public:
    Vehicle(std::string brand, int model, std::string color);
    [[nodiscard]] std::string getBrand() const;
    [[nodiscard]] int getModel() const;

private:
    void setBrand(std::string newName);
    void setModel(int newModel);

protected:
    void printComment();
};


#endif //INHERITANCE_CLASSES_VEHICLE_H