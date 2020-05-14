#include <cassert>
#include <string>

template <typename T>
T Maximum(T value1, T value2) {
    return value1 > value2 ? value1 : value2;
}

int main() {
    assert(Maximum<int>(2, 4) == 4);
    assert(Maximum<double>(-7.0, -3.0) == -3.0);
    assert(Maximum<char>('a', 'b') == 'b');
}