//
// Created by fernando on 4/4/26.
//

#include "Triangle.h"

Triangle::Triangle(float base, float height): base(base), height(height) {}

float Triangle::getArea() const {
    return (base*height)/2;
}

float Triangle::getPerimeter() const{
    return (base+ height)*2 ;
}
