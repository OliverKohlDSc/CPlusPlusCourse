#include "car.hpp"

void Car::PrintCarData()
{
    cout << "The distance that the " << color 
         << " car " << number << " has traveled is: "
         << distance << endl;
}

void Car::IncrementDistance()
{
    distance++;
}