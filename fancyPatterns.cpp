#include<iostream>

using namespace std;

//Fancy Pattern 1

// int main(){
//     int rows = 5;
//     for (int i= 0 ; i<=rows ; i++){
//         for (int j=1; j<=2*i-1 ; j++){
//             (j%2==0) ? (cout << "*") : (cout << i);
//         }
//         cout << endl;
//     }
//     for (int i= rows ; i > 0 ; i--){
//         for (int j=1; j<=2*i-1 ; j++){
//             (j%2==0) ? (cout << "*") : (cout << i);
//         }
//         cout << endl;
//     }
// }

//Fancy Pattern 2

int main(){
    int rows = 5;
    for (int i= 0 ; i<=rows ; i++){
        for (int j=1; j<=2*i-1 ; j++){
            (j%2==0) ? (cout << "B ") : (cout << "A ");
        }
        cout << endl;
    }
    for (int i= rows ; i > 0 ; i--){
        for (int j=1; j<=2*i-1 ; j++){
            (j%2==0) ? (cout << "B ") : (cout << "A ");
        }
        cout << endl;
    }
}