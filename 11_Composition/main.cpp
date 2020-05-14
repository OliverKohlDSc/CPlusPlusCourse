//4.3.6
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

class Wheel {
    public:
        Wheel() : diameter(50) {};
        float diameter;
};

class Car {
    public:
        Car() : wheels(4, Wheel()) {};
        std::vector<Wheel> wheels;
};

int main() {
    Car car;
    assert(car.wheels.size() > 1);
}