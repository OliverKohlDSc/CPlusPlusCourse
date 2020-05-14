#include <string>
#include <cassert>
using namespace std;

class Animal {
    virtual string Talk() const = 0;
};

class Cat : public Animal {
    public:
        string Talk() const;
};

string Cat::Talk() const {
    return "Meow";
}

class Lion : public Cat {
    public:
        string Talk() const;
};

string Lion::Talk() const {
    return "Roar";
}

int main() {
    Cat cat;
    Lion lion;
    assert(cat.Talk() == "Meow");
    assert(lion.Talk() == "Roar");
}