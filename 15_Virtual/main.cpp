#include <iostream>

class Animal {
    virtual void Talk() const = 0;
};

class Human : public Animal {
    public:
        void Talk() const {
            std::cout << "Hello!" << std::endl;
        }
};

int main() {
    Human human;
    human.Talk();
}