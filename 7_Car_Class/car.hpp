#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        // Method to print data
        void PrintCarData();

        // Method to increment the distance travelled.
        void IncrementDistance();

        Car(string c, int n) : color(c), number(n) {}

    private:
        // Class/object attributes
        string color;
        int distance = 0;
        int number;
};
#endif