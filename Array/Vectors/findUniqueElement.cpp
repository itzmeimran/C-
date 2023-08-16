#include <iostream>
#include <vector>

using namespace std;


int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 1, 1, 2, 2, 3, 3,4};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is : " << uniqueElement;
}