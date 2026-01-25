//
// Created by fernando on 1/25/26.
//

#include "square.h"

Square::Square(double _length, double _width) {
    length = _length;
    width = _width;
}

double Square::getArea() const {
    return length * width;
}

double Square::getPerimeter() const {
    return 2 * (length + width);
}
