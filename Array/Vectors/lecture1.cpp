#include <iostream>
#include <vector>

using namespace std;

int main(){


    //Mehtod 1 to declare array

    // vector<int>arr;

    // arr.push_back(1);
    // arr.push_back(3);
    // arr.push_back(5);

    // arr.pop_back();

    //Method 2 to declare an array

    vector<int>arr{10,30,50,70,90,110};

    for (int i =  0; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
}