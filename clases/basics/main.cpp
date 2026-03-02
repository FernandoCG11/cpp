#include <iostream>

int main() {
    return 0;
}

class Car {
    // Attributes
private:
    int speed = 0;
    int year = 0;

    // Constructor: initialize attributes at creating objects
public:
    Car(int _speed, int _year) {
        speed = _speed;
        year = _year;
    }

    // Methods
public:
    int setSpeed(int x) {
        return speed = x;
    }
    int setYear(int x) {
        return year = x;
    }

    int getSpeed() {
        return speed;
    }

    int getYear() {
        return year;
    }
};