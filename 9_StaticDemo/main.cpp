#include <cassert>

class Car {
    public:
        static int count;
        Car() { Car::count++; }
};

int Car::count{0};

struct Kilometer {
    static constexpr int meters{1000};
};

int main() {
    Car fabia{};
    assert(Car::count == 1);

    Kilometer km{};
    assert(Kilometer::meters == 1000);
}