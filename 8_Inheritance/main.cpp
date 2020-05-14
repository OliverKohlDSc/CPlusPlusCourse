//3.1.4
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
        int wheels = 0;
        string color = "blue";

        void Print() const {
            cout << "This " << color << " vehicle has " << wheels << " wheels!" << endl;
        }
};

class Car : public Vehicle {
    public:
        bool sunroof = false;
        Car() /* {}*/;
};


Car::Car() {
    wheels = 3;
}

class Bicycle : private Vehicle {
    public:
        bool kickstand = true;
};



/*
    Define a class Animal.
    Define 3 member variables: color, name, age.
    Define a derived class Snake that inherits from the base class Animal.
    Create a member variable length for the Snake class.
    Create a derived class Cat that inherits from the base class Animal.
    Create a member variable height for the Cat class.
    Create MakeSound() member functions for each of the derived classes.
    In the main() function instantiate Snake and Cat objects. Initialize both their
    unique and derived attributes. Program them to make a sound.
*/

class Animal {
    public:
        string color;
        string name;
        // age in years
        int age;
};

class Snake : public Animal {
    public:
        // length in centimeters
        int length;
        void MakeSound();
};

class Cat : public Animal {
    public:
        // height in centimeters
        int height;
        void MakeSound();
};

void Cat::MakeSound() {
    cout << "Meow" << endl;
}

void Snake::MakeSound() {
    cout << "Zzzzzz" << endl;
}

int main() {
    Cat cat{};
    Snake snake;

    cat.age = 10;
    cat.name = "Sweety";
    cat.MakeSound();

    snake.MakeSound();

    /*
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.Print();

    cout << cat.age << " " << cat.name << endl;

    if (car.sunroof)
        cout << "And a sunfoof!" << endl;
    */
}