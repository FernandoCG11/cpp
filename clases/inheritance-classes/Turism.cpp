//
// Created by fernando on 3/25/26.
//

#include "Turism.h"

#include <utility>

Turism::Turism(std::string brand, int model, std::string color, std::string name): Vehicle(std::move(brand), model, std::move(color)), name(std::move(name)){}

std::string Turism::getName() const {
    return this->name;
}
