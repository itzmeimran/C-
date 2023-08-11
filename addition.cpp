#include <iostream>

using namespace std;

int add(int n , int m){
    return (n+m);
}

int main(){
    int n, m  ;
    cout << "Enter value of A :" << endl;  
    cin >> n ;
    cout << "Enter value of B :" << endl;  
    cin >> m ;

    int sum = add(n,m);
    cout << "Sum is " << sum <<endl;
}