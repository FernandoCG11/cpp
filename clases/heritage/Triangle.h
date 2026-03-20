//
// Created by fernando on 3/20/26.
//

#ifndef HERITAGE_TRIANGLE_H
#define HERITAGE_TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape{
private:
    float sideOne{}, sideTwo{}, sideThree{};
public:
    Triangle(int,float, float, float);
    [[nodiscard]] float getArea()const;
};


#endif //HERITAGE_TRIANGLE_H