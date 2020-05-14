//4.3.8
#include <cassert>
#include <iostream>

class Heart {
    private:
        int rate{80};
        friend class Human;
};

class Human {
    public:
        Heart heart;
        void Exercise() { heart.rate = 150; }
        int HearRate() { return heart.rate; }
};

int main() {
    Human human;
    assert(human.HearRate() == 80);
    human.Exercise();
    assert(human.HearRate() == 150);
    std::cout << "End of execution" << std::endl;
}