//4.13.14
#include "car.hpp"

#include <vector>

int main()
{
    // Create class instances for each car.
    Car car_1 = Car("green", 1);
    Car car_2 = Car("red", 2);
    Car car_3 = Car("blue", 3); 

    // new -> alloc (allocate)
    // deallocate

    Car *p_car_2 = &car_2;
    // C++
    // 1. Dereference the pointer
    // 2. access IncrementDistance();
    p_car_2->IncrementDistance();

    // C
    // Derefrerence the pointer using *,
    // then access IncrementDistance() with the
    // traditional dot notation.
    (*p_car_2).IncrementDistance();

    // Increment car_1's position by 1.
    car_1.IncrementDistance();

    // Print out the position and color of each car.
    car_1.PrintCarData();
    car_2.PrintCarData();
    car_3.PrintCarData();

    // Create an empty vector of pointers to Cars
    // and a null pointer to a car.
    vector<Car*> car_vect; 
    Car *pCar = nullptr;

    vector<string> colors{"red", "blue", "green"};

    // Create 100 cars with different colors and
    // push pointers to each of those cars into the vector.
    for (int i =0; i < 100; i++)
    {
        pCar = new Car(colors[i%3], i+1);
        car_vect.push_back(pCar);
    }

    // move each car forward by 1.
    for (Car *pcar : car_vect)
    {
        pcar->IncrementDistance();
    }

    // Print data about each car.
    for (Car *pcar : car_vect)
    {
        pcar->PrintCarData();
    }
}