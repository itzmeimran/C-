#include<iostream>

using namespace std;

int main(){

    // bool a = false;
    // bool b = false;
    // cout << (~a | ~b) ; 

    //Left & Right shift

    int a = 12;
    a = a << 1 ;  
    
    int b = -10;
    b = b >> 1 ;
    // int b = a << 1 ;
    cout << "Left shift of a is "<< a << endl;  //Value is doubled
    cout << "Right shift of b is " << b << endl; //Value is halved
}