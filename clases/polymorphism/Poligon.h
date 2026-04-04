//
// Created by fernando on 4/4/26.
//

#ifndef POLYMORPHISM_POLIGON_H
#define POLYMORPHISM_POLIGON_H


class Poligon {
public:
    virtual ~Poligon() = default;

    [[nodiscard]] virtual float getArea() const = 0;
    [[nodiscard]] virtual float getPerimeter() const = 0;
};


#endif //POLYMORPHISM_POLIGON_H