#include <iostream>
#include <string.h>
using namespace std;

bool palindromeCheck(char string[]){
    int length = strlen(string);
    int i =0 ;
    int j = length-1;
    while (i<=j){
        if(string[i]==string[j]){
            i++;
            j--;
            return true;
        }
        else{
            return false;
        }

    }
    return true;
}

int main()
{
    char string[100];
    // vector<char>arr[100];
    cout << "Enter your string : " << endl;
    cin.getline(string,100); // Here iam using Cin.getLine function to store spaces also  
    cout << "The given string is : " << palindromeCheck(string);

}