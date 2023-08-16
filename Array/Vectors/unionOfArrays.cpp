#include <iostream>
#include <vector>

using namespace std;

vector<int>unionArray(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr1{1, 2, 3, 4};
    vector<int> arr2{2,5, 6, 7};

    vector<int> unionAr = unionArray(arr1, arr2);
    cout << "Union of two arrys is : " ;

    for (int i = 0; i < unionAr.size(); i++)
    {
        cout << unionAr[i] << " ";
    }
    return 0;
}