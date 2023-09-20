#include<iostream>
#include<stdio.h>

using namespace std;

int print(int a){
    //base case;
    if (a<=0) {
        return 0;
    }
    //logic
    cout << a<< endl;
    print(a-1);

}

int main(){
    int x = 10;
    print(x);
}