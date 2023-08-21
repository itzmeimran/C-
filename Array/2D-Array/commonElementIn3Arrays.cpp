#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> arr1{2, 4, 6, 8, 10};
vector<int> arr2{2, 7, 8, 9, 10};
vector<int> arr3{2, 4, 6, 8, 10};

set<int> commonElement(vector<int> arr1, vector<int> arr2, vector<int> arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> ans; // instead of using vector use set to push elements to avoid duplicacy;
    set<int> st;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr1[i] == arr3[k])
        {
            st.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    // for (auto i: st)
    // {
    //     ans.push_back(i);
    // }
    return st;
}

int main()
{
    set<int> ans = commonElement(arr1, arr2, arr3);
    for (auto nums : ans){
        cout << nums << " ";
    }
    cout << endl;
}