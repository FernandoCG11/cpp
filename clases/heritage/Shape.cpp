//
// Created by fernando on 3/20/26.
//

#include "Shape.h"

Shape::Shape(int sides): nSides(sides) {}

int Shape::getNSides() const {
    return this->nSides;
}
