#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    // Declaring var
    int a = 5;

    // Creating a pointer
    int *ptr = &a; // ptr is a pointer to integer data; pointer is a var that stores the address of another var ;

    // Printing variable
    cout << "Value of ptr is : " << *ptr << endl;
    cout << "Address of ptr is : " << ptr << endl;
}

// when we say int a = 5 ;

// first -> in symbol table a is allocated with some address say 104
// second -> upon that address 104 there is value 5;
// here a = 5 ; &a represent address of a ; *a represent value stored at a  ; *k = &a represent value stored at a ;