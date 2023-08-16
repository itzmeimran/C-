#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<vector<int>>arr;

    vector<int> a{3,6,9};
    vector<int> b{12,15,18};
    vector<int> c{21,25,27};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i=0; i<arr.size(); i++){
        for (int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}