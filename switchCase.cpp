#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x ;
    switch (x){
        case 1 : cout << "Lottery";
        break;
        case 2 : cout << "Web development";
        break;
        case 3 : cout << "Android Development";
        break;
        default : cout << "DevOps";
    }
}