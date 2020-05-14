#include <cassert>
#include <string>
#include <vector>

template <typename T>
T Maximum(T value1, T value2) {
    return value1 > value2 ? value1 : value2;
}

int main() {
    assert(Maximum(2, 4) == 4);
    assert(Maximum(-7.0, -3.0) == -3.0);
    assert(Maximum('a', 'b') == 'b');

    std::vector myVector{1,2,3};
    assert(myVector.size() == 3);
}