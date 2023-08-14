#include <iostream>
#include <climits>

using namespace std;

int arr[] = {1444,123,432,900,1020};

int findmax(int arr[], int size){
    int maximum = INT_MIN;
    for (int i = 0 ; i<size; i++){
        if (arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum; 
}

int findmin (int arr[], int size){
    int minimum  = INT_MAX;
    for (int i = 0 ; i< size ; i++){
        if(arr[i] < minimum){
            minimum  =arr[i];
        }
    }
    return minimum;

}

int main(){
    int maximum  = findmax(arr , 5);
    cout << "maximum value of array is " << maximum << endl;
    int minimum  = findmin(arr , 5);
    cout << "minimum value of array is " << minimum << endl;
    return 0 ;
}