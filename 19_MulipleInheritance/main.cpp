#include <cassert>
#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
        string Drive() { return "I'm driving ..."; }
};

class Boat {
    public:
        string Cruise() { return "I'm cruising ..."; }
};

class AmphibiousCar : public Boat, public Car {

};

int main() {
    Car car;
    Boat boat;
    AmphibiousCar jamesBondCar;

    assert(jamesBondCar.Drive() == car.Drive());
    assert(jamesBondCar.Cruise() == boat.Cruise());
}