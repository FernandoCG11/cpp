//
// Created by fernando on 3/20/26.
//

#ifndef HERITAGE_SHAPE_H
#define HERITAGE_SHAPE_H


class Shape {
private:
    int nSides;

public:
    Shape(int);
     [[nodiscard]] int getNSides()const;
};


#endif //HERITAGE_SHAPE_H