#include <math.h>

#define PI 3.141592653589793238462643383279502884L

class Shape {
    public:
        virtual double Area() const = 0;
        virtual double Perimeter() const = 0;
};

class Circle : public Shape {
    public:
        Circle(double radius) : radius_(radius) {}

        /*
        constexpr double pi() {
           return atan(1)*4; 
           //return boost::math::constants::pi()
        }
        */
        double Area() const override {
            return pow(radius_, 2) * PI;
        }
        double Perimeter() const override {
            return 2 * radius_ * PI;
        }
    private:
        double radius_;
};

int main() {
    
}