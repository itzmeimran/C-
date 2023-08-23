#include<iostream>
#include<vector>

using namespace std;

int findSqrt(vector<int>arr,int target){
    int s = 0; 
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while (s<=e){
        //Handling edge case;

        if (target > arr[e]*arr[e] ){
            return -1;
            break;
        }

        //Main code
        if (arr[mid]*arr[mid] == target){
            return arr[mid];
        }else if (arr[mid]*arr[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }

}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    int ans = findSqrt(arr,target);
    cout << ans;
}