#include <iostream>
#include <cassert>
#include <vector>

struct Person {
    public:
        Person(std::string name) : name(name) {

        }
    
    std::string const name;
};

// Define a simple structure
class Date
{
    // C++                 Java
    // accessor (func.)  = "getter"
    // mutator           = "setter"
    // Access specifiers = Access modificator / Visibility
    // member function   = instance method
    // namespace         = package
    // attribute         = field, property (!= Java 8 Property)

    // ::  ... Scope resolution operator

    public:
        Date(int day, int month, int year);
        int Day() const;
        void Day(int day);
        int Month() const;
        void Month(int month);
        int Year() const;
        void Year(int year);
        std::string String() const;

    private:
        bool LeapYear(int year) const;
        int DaysInMonth(int month, int year) const;
        int day_{1};
        int month_{1};
        int year_{0};
};

Date::Date(int day, int month, int year) {
    Year(year);
    Month(month);
    Day(day);
}

bool Date::LeapYear(int year) const {
    if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false; 
    else
    {
        return true;
    }
}

int Date::DaysInMonth(int month, int year) const {
    if (month == 2)
        return LeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
    {
            return 31;
    }
}

int Date::Day() const {
    return day_;
}

int Date::Month() const {
    return month_;
}

int Date::Year() const {
    return year_;
}

void Date::Day(int day) {
    if (day >= 1 && day <= DaysInMonth(Month(), Year()))
        day_ = day;
}

void Date::Month(int month) {
    if (month >= 1 && month <= 12)
        month_ = month;
}

void Date::Year(int year) {
    year_ = year;
}

struct Rectangle
{
    float length;
    float width;
};

std::string Date::String() const {
    std::vector<std::string> months {
                                        "January", "february", "March", "April", "May",
                                        "June", "July", "August", "September",
                                        "October", "November", "December"
                                    };
    return months[Month()-1] + " " + std::to_string(Day()) + ", " + std::to_string(Year());
}

// OLD SCHOOL SYNTAX -> NOK!!!
/*
typedef struct {
    float length;
    float width;
} Rectangle2;
*/

int main()
{
    Person alice("Alice");
    Person bob ("Bob");
    assert(alice.name != bob.name);
    std::cout << bob.name << std::endl;
    std::cout << alice.name << std::endl;

    Date date(10, 6, 1970);
    assert(date.String() == "June 10, 1970");
    std::cout << date.String() << std::endl;
}