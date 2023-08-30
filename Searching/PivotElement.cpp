#include <iostream>
#include <vector>

using namespace std;

int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[m] > arr[m + 1]) // Checking if mid > mid +1 so obviously return mid
        {
            return m;
        }
        if (m - 1 >= s && arr[m - 1] > arr[m]) // Checking if mid-1 > mid so its big and return it i.e mid-1
        {
            return m - 1;
        }
        if (arr[s] > arr[m])
        {
            // search in left
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
}

int main()
{
    vector<int> arr = {6,8,1,2,3}; //
    int pivot = findPivot(arr);
    cout << "Pivot element is at index: " << pivot << endl;
}