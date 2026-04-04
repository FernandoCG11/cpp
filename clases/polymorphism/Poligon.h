//
// Created by fernando on 4/4/26.
//

#ifndef POLYMORPHISM_POLIGON_H
#define POLYMORPHISM_POLIGON_H


class Poligon {
public:
    virtual ~Poligon() = default;

    virtual float getArea() = 0;
    virtual float getPerimeter() = 0;
};


#endif //POLYMORPHISM_POLIGON_H