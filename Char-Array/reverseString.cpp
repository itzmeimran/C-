#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void reverseFunction(char s[], int n){
    int a = 0;
    int b = n-1;
    while (a<=b){
        swap(s[a],s[b]);
        a++;
        b--;
    }
}
int main(){
    char s[1024];
    cout << "Enter a string: " << endl;
    //If not considering space use below line

    // cin >>s ; 

    // use cin.getline(s,100) if u considering spaces
    cin.getline(s,100);
    int n  = strlen(s);
    reverseFunction(s,n);
    cout << "Reversed string : " << s ; 
}