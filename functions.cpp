#include <iostream>

using namespace std;

void printName()
{
    cout << "Mohammad Imran Khan" << endl;
}

void max(int a, int b)
{

    (a > b) ? (cout << a << "Greater than " << b) : (cout << b << "Greater than " << a);
}

int getSum(int a, int b){
    cout << a+b << endl;
}
int main()
{
    int a,b;
    cout << "Enter a " << endl;
    cin >> a ;
    cout << "Enter b " << endl;
    cin >> b;
    max(a,b);
    cout << endl;
    cout << "Sum is "  ;
    int sum  = getSum(a,b);
    return 0;

}