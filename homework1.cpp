#include<iostream>
#include<cmath>

using namespace std;

//Problem 1 --> factorial of n
int factorial(int n ){
    //base case
    if (n <= 0){
        return 1 ;
    }

    // remaning code
    int result;
    return result = n * factorial(n-1);

}

//Problem 2 ; printing individual digits of a number

void printNumbers(int n){
    //base case
    if(n == 0){
        return;
    }
    //remaining code
    int result;
    result = n % 10;
    printNumbers(n/10);
    cout << result << " " ;

}

//Problem 3 --> Area of circle

int areaOfCircle(int n){
    double pi = M_PI;
    return pi*n*n;
}

int main(){
    int n = 4;
    cout<<factorial(n)<<endl;

    int number = 654;
    printNumbers(number);

    int radius = 5;
    cout<<"Area is "<<areaOfCircle(radius) <<" square units"<< endl;
}