#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Double Pointers here" << endl;
    int a = 10; // Declaring a variable 'a'
    cout << "variable is : " << a << endl;

    int *p = &a; // Pointer to varaible int 'a'
    
    cout << "&a ---> " << &a << endl;
    cout << "p ---> " << p << endl;
    cout << "&p ---> " << &p << endl; 
    cout << "*p ---> " << *p << endl;
    cout << "size of p ---> " << sizeof(p) << endl;
     
    int **q = &p; // Pointer to pointer int a  ;

    // cout << "q ---> " << q << endl;
    cout << "&q ---> " << &q << endl;
    cout << "*q ---> " << *q << endl;
    cout << "**q ---> " << **q << endl;

    int arr[] = {1,2,3,4};
    int *ptr = arr++;
    cout << *ptr << endl;
}                                  