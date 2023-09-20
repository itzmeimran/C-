#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char name[6] = "imran";
    char *c = &name[0];
    cout << name << endl;        // Print full name;  
    cout << &name << endl;       // Base - Address of name
    cout << *(name + 3) << endl; // Print element at index 3
    cout << *c << endl;          // Print first element
    cout << c + 2 << endl;       // Print entire string from index 2 
    cout << c + 4 << endl;       // Print entire string from index 4
    cout << &c << endl;

    return 0;
}