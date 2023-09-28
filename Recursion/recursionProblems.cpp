#include <iostream>
#include <limits.h>

using namespace std;

//if head recursion array is printed in reverse direction
// if tail recursion array is printed normally
// Therefore to print in reverse direction we use head recursion and to print normally we have to use tail recursion
void printDigits(int x)
{
    // baseCase
    if (x==0)
    {
        return;
    }
    // Recursive call
    printDigits(x / 10); // by dividing the number we are removing the right most digit
    cout << x%10 << ","; // here we are printing the removed digit using modulo 
}

void printArray(int arr[], int n , int i){
    //base case
    if (i>=n){
        return;
    }
    //recursive call
    printArray(arr ,n ,i+1);
    cout << arr[i] << ",";
}

void findMax(int arr[], int i , int n, int& maxi){
    //baseCase
    if(i>=n){
        return;
    }
    //Recursive call
    if (arr[i] > maxi){
        maxi = arr[i];
    }
    findMax(arr,i + 1,n,maxi);
}

bool findKey(string a , int n , int i , char key ){
    //Base Case
    if (i>=n){
        return false;
    }

    //Return statement
    if (a[i] == key){
        return true;
    }
    //recursive relation
    return findKey(a,n,i+1,key);
}

int main()
{
    int x = 123467890;
    int arr[4] = {10,20,30,40};
    int ar[10] = {43,98,12,32,94,5,12,54,10,8};
    int maxi = INT_MIN;
    // findMax(ar, 0 , 10 , maxi );
    // cout << "Maximum is : " << maxi;
    printArray(arr,4,0);
    // printDigits(x);
    string str = "ImranKhan";
    int n = str.length();
    bool ans = findKey(str,n,0,'q');
    cout << ans;
    return 0;
}