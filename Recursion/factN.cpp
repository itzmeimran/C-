#include <iostream>
#include <stdio.h>

using namespace std;

int fact(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int printingIntegers(int n) //Tail recursion
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    // recursive call
    cout << n << " ";
    printingIntegers(n - 1);
}

int main()
{
    int n = 5;
    int m = 10;
    cout << "Factorial of " << n << " is : " << fact(n) << endl;
    printingIntegers(m);
}