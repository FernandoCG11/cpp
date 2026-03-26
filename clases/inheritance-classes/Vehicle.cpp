//
// Created by fernando on 3/25/26.
//

#include "Vehicle.h"

#include <iostream>

Vehicle::Vehicle(std::string brand, int model, std::string color): brand(std::move(brand)), model(model), color(std::move(color)) {}

std::string Vehicle::getBrand() const {
    return this->brand;
}

int Vehicle::getModel() const {
    return this->model;
}

void Vehicle::setBrand(std::string newName) {
    this->brand =std::move(newName);
}

void Vehicle::setModel(int newModel) {
    this->model = newModel;
}

void Vehicle::printComment() {
    std::cout << "I'm practicing my logic" << std::endl;
}
