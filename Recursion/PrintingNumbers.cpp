#include <iostream>
#include <stdio.h>

using namespace std;

// Tail recursion as the recursive call is after print statement
int tailRecursion(int a)
{
    // base case;
    if (a <= 0)
    {
        return 0;
    }
    // logic
    cout << a << " ";
    tailRecursion(a - 1);
}

int headRecursion(int x)
{
    // baseCase
    if (x == 0)
    {
        return 1;
    }
    headRecursion(x - 1);
    cout << x << " ";
}

int main()
{
    int x = 10;
    cout << "Tail recursion" << endl;
    tailRecursion(x);
    cout << "Head recursion" << endl;

    headRecursion(x);
}