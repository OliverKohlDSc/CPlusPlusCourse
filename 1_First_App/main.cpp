//2.1.13
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::vector;

int main() {
    // Declaring and initialzing an int variable
    int a = 9;

    // Declaring a string variable without initializing
    std::string b;

    b = "Here is a string";

    cout << a << "\n";
    cout << b << "\n";

    // There are three ways of declaring and initializing vectors ...
    vector<int> variante3;
    vector<int> variante2 = { 3, 4, 5 };
    vector<int> variante1{0, 1, 2};
    variante3 = {6};

    // declared and initialized without explicitly stating type
    auto i = 5;
    auto vector1 = {1,2,3};

    /*
    For longer comments, you can enclose the text with an opening
    slash-star and closing star-slash.
    */ 

    // Creating a 2D vector
    vector<vector<int>> board = {
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,0,0,0,0,1}
    };

    vector<int> c = {0,1,2,3,4};
    cout << c[0];

    for (int i = 0; i < 5; i++) {
        cout << c[i] << "\n";
    }
}