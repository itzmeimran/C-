#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int getLength(char name[])
{

    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char name[100];
    cout << " Enter Your Name : " << endl;
    cin.getline(name, 100);
    cout << "Length of name is :" << getLength(name) << endl; // Creating funciton to calculate length;
    cout << "Length of name is :" << strlen(name) << endl;    // Using strlen from string.h
}

