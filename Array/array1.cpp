#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    bool flag = false;
    if (!arr){
        return false;
    }
    for (int i = 0 ; i < size ; i++){
        if (arr[i] == key){
            flag = true;
            break;
        }
    }
        return flag;
}

int main()
{
    int arr[] = {1, 2, 6, 7, 8, 9, 10};
    int result = find(arr, 7, 11);
    cout << result;
}