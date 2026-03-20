//
// Created by fernando on 3/20/26.
//

#include "Triangle.h"

#include <complex>
#include <iostream>

Triangle::Triangle(int sides, float sideO, float sideT, float sideTh): Shape(sides), sideOne(sideO), sideTwo(sideT), sideThree(sideTh) {}

float Triangle::getArea() const {
    float perimeter = (sideOne + sideTwo + sideThree)/2;
    float area = std::sqrt(perimeter*(perimeter-sideOne)*(perimeter-sideTwo)*(perimeter-sideThree));
    return area;
}
