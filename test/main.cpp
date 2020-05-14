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

#include <iostream>
using namespace std;

class Animal {
    private:
    string name;
    int age;
    string color;

    protected:
    string type = "Animal";

    public:
    Animal(string color, string name, int age) {
        this->color = color;
        this->name = name;
        this->age = age;
    }

    void makeSound();
};

class Snake : public Animal {
    private:
    int length;

    public:
    Snake(string color, string name, int age, int length) : Animal(color, name, age) {
        this->length = length;
        this->type = "Snake";
    }
};

class Cat : public Animal {
    private:
    int height;

    public:
    Cat(string color, string name, int age, int height) : Animal(color, name, age) {
        this->height = height;
        this->type = "Cat";
    }
};

void Animal::makeSound() {
    cout << "*Sound of a " << this->color << " " << this->type << "*" << endl;
}

int main() 
{
    cout << "________________________" << endl << "Started" << endl << "________________________" << endl;

    Cat cat("yellow", "Tiger", 4, 2);
    Snake snake("green", "Python", 1, 2);
    Animal animal("black", "Dog", 2);

    cat.makeSound();
    snake.makeSound();
    animal.makeSound();
};