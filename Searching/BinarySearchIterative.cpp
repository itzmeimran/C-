#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    int target = 10;
    while (start<=end){
        if (arr[mid] == target){
            cout << "found at index: "<< mid<<endl;;
            break;
        }
        else if (arr[mid] < target){
            //search in right half of array
            start = mid+1;
            
        }
        else{
            //search in left half of array
            end = mid-1;
        }

        //Updating mid value
        mid = (start+end)/2;
    }
    return 0;
}