#include <string>
#include <assert.h>
#include <sstream>

using std::string;

template <typename KeyType, typename ValueType>
class Dictionary {
    public:
        Dictionary (KeyType key, ValueType value) : key(key), value(value) {};

        string ToString() const {
            std::ostringstream stream;
            stream << key << ": " << value;
            return stream.str();
        }

        KeyType key;
        ValueType value;
};

int main() {
    Dictionary<string, int> dictionary ("age", 20);
    assert(dictionary.ToString() == "age: 20");
}