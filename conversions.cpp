#include <iostream>
#include <cmath>
  
using namespace std;

// Decimal to binary using Division ::

int decimalToBinary(int n)
{

    // Normal method :

    // while (n > 0)
    // {
    //     int bit = n % 2;

    //     cout << bit;
    //     n = n / 2;
    // }
    // return 0;

    // Recursion method :

    // BaseCase
    if (n <= 0)
    {
        return 0;
    }

    // remaining code

    int result = n % 2;
    decimalToBinary(n / 2);
    cout << result;
}

// Method 2

int Decimal2Binary(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    // remaining code

    int result = n & 1; // instead of % we are using &1
    
    decimalToBinary(n >> 1); // instead of n/2 we are using right shift
    cout << result;
}

//Binary to decimal

int BinaryToDec(int n){
    int ans = 0;
    int i = 0;
    while(n){
        int digit = n % 10;
        ans += digit * pow(2, i++) ;
        n/=10;
        
    }
    return ans;
}

int main()
{
    cout << "Enter a number : " << endl;
    int n;
    cin >> n;

    // cout << " Method 1 : ";
    // decimalToBinary(n);
    // cout<< endl;
    // cout << " Method 2 : ";
    // Decimal2Binary(n);

    //Binary to Decimal
    cout << "Method 3 : " ;
    cout << "Binary to decimal -- > " << BinaryToDec(n) << endl; 

}  