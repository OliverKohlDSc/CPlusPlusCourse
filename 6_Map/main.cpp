//4.12
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::unordered_map;

int main() 
{
    // Create string to use in the hash table
    string key = "word";

    string def_1 = "a unit of language, consisting of one or more spoken sounds";
    string def_2 = "speed or talk: to express one's emotion in words";
    string def_3 = "a short talk or conversation: 'Robert, I'd like a word with you.'";
    string def_4 = "an expression or utterance: a word of warning";

    unordered_map<string, vector<string>> myDictionary;

    // Check if key is in the hash table.
    if (myDictionary.find(key) == myDictionary.end()) {
        cout << "The key 'word' is not in the dictionary" << endl;
        cout << "Inserting a key-value pair into the dictionary." << endl << endl;

        // Set the value for the key
        myDictionary[key] = vector<string>{def_1, def_2, def_3, def_4};
    };

    // The key should now be in the has table.
    cout << key << ": " << endl;
    auto definitions = myDictionary[key];

    for (string defintion : definitions)
    {
        cout << defintion << endl;   
    }

    unordered_map<int, string> myMap {
        {1, "Peter"},
        {2, "Kerstin"},
        {3, "Julia"}
    };
}