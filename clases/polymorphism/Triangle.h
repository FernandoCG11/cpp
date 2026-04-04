//
// Created by fernando on 4/4/26.
//

#ifndef POLYMORPHISM_TRIANGLE_H
#define POLYMORPHISM_TRIANGLE_H
#include <cmath>

#include "Poligon.h"


class Triangle: public Poligon {
private:
    float base{};
    float height{};
public:
    Triangle(float base, float height);
    [[nodiscard]] float getArea() const override;
    [[nodiscard]] float getPerimeter()const override;
};


#endif //POLYMORPHISM_TRIANGLE_H