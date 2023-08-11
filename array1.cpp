#include <iostream>
using namespace std;

int find(int arr[],int size, int key){
    int flag = 0;
    if (arr == NULL ||size <= 0) return -1;
    for (int i = 0 ; i< size ; i++){
        flag  = (arr[i] == key) ? 1 : flag;
    }
    return flag ; 
}




int main(){
    int arr[] = {1,2,6,7,8,9,10};
   int result = find(arr,7,11);
    cout << result;
}