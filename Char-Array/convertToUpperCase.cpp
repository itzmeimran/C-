#include<iostream>
#include<string.h>

using namespace std;

void upperCaseStr(char str[]){
    int n = strlen(str);
    for (int i =0; i<n;i++){
        str[i] = str[i] - 'a' + 'A'; 
    }

}
void lowerCaseStr(char str[]){
    int n = strlen(str);
    for (int i =0; i<n;i++){
        str[i] = str[i] - 'A' + 'a'; 
    }

}


int main(){
    char str[150];
    cout << "Enter string: "<<endl;
    cin >> str;
    lowerCaseStr(str);
    cout << str << endl;
}