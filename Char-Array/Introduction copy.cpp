#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    // vector<char>arr[100];
    cout << "Enter your string : " << endl;
    cin.getline(arr,100); // Here iam using Cin.getLine function to store spaces also  
    // for (int i =0 ; i<5; i++){
    //     cout<<arr[i]<<endl;
    // }
    cout << arr;
}