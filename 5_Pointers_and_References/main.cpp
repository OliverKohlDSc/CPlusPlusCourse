//4.6.11
#include <iostream>
#include <vector>
using namespace std;

void AddOneRef(int &j)
{
    j++;
}

void AddOne(int *j)
{
    // Dereference the pointer
    //(*j)

    // Dereference the pointer and increment the int being point to.
    (*j)++;
}

int* AddOneRefPtr(int &j)
{
    // Increment the reference integer
    j++;

    // Return the address of j.
    return &j;
}

int main() {
    // Get the memory address of the variables i and j.
    // This has nothing in common with a typical reference (left side of the equation).
    /*
    int i = 5;
    int j = 6;

    cout << "The address of i is: " << &i << "\n";
    cout << "The address of j is: " << &j << "\n";
    */
    
    // POINTERS - Part1 
    /*
    int i = 5;

    // A pointer pointer_to_i is declared
    // and initizized to the address of i
    int *pointer_to_i = &i;

    // Print the mem. addresses of i and j
    cout << "The address of i is:          " << &i << std::endl;
    cout << "The variable poiknter_to_i is:" << pointer_to_i << std::endl;

    // How do I get my object back from a pointer address?
    cout << "The value of the variable pointed to be pointer_to_i is: "
         << *pointer_to_i << std::endl;

    i = 7;
    cout << "The new value of the variable i is                     : " << i << "\n";
    cout << "The value of the variable pointed to by pointer_to_i is: " 
         << *pointer_to_i << "\n";
    cout << "The address of i is:          " << &i << std::endl;
    */


    // POINTERS - Part2 
    vector<int> v{1, 2, 3};

    vector<int> *pv = &v;

    for (int i : v)
    {
        cout << i << endl;
    }

    // Example 1)
    // Dereference your pointer to v and print the integer at index 0 here
    // Note: You should print 1 :-)
    cout << (*pv)[0] << endl;
    cout << v[0] << endl;

    //cout << &v << endl;
    //cout << pv << endl;

    int myValue = 1;
    cout << "The value of myValue is: " << myValue << endl;

    // Declare a pointer to myValue
    int *pmyValue = &myValue;
    AddOneRef(myValue);
    AddOne(pmyValue);
    AddOne(&myValue);

    cout << "The value of i is now: " << myValue << endl;

    int p = 3;
    cout << "The value of p is: " << p << endl;

    int *pp = AddOneRefPtr(p);
    cout << "The value of p is now: " << /* p */ *pp << endl;
    cout << "The address of p is: " << /* pp */ &p << endl;
}