//
// Created by fernando on 1/25/26.
//

#ifndef SQUARE_SQUARE_H
#define SQUARE_SQUARE_H


class Square {
private:
    double length = 0;
    double width = 0;

public:
    Square(double, double);
    double getArea() const;
    double getPerimeter() const;
};


#endif //SQUARE_SQUARE_H