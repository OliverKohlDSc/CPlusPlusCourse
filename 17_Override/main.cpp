/* Where's the bug? */
#include <cassert>
#include <string>
using std::string;

class Animal {
    public:
        virtual string Talk() const = 0;
};

class Dog /*: public Animal*/ {
    public:
        string Talk() const /*override*/;
};

string Dog::Talk() const {
    return "Woof";
}

int main() {
    Dog dog;
    assert(dog.Talk() == "Woof");
}