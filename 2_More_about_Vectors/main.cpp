//2.14.15
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // ************** How to display a 1D vector on the console? *********************
    vector<int> a = {0, 1, 2, 3, 4};

    // That's a lot of work
    // Printing each vector on its own ...
    cout << a[0];
    cout << a[1];
    cout << a[2];

    // Alternative
    // How 'bout a for loop
    for(int i : a)
        cout << i;

    cout << "\n";

    // Print the length of vector a to the console.
    cout << a.size() << "\n";

    // ************** 2D vectors and the console *********************
    
    vector<vector<int>> b = {{1, 1, 2, 3},
                            {2, 1, 2, 3},
                            {3, 1, 2, 3}};
    cout << b[2][1];

    // Print the length of an inner vector of b here.
    cout << b[2].size();

    cout << "\n";
}