#include <iostream>
#include <vector>

using namespace std;

int findMissing(vector<int> arr, int start, int end)
{
    if (start > end)
    {
        return start+1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == mid + 2)
    {
        //search in right side
        return findMissing(arr, start, mid-1);
    }

    else
    {
        // Search in left side
        return findMissing(arr, mid + 1, end);

    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7,8,9};
    int start = 0;
    int end = arr.size() - 1;
    int result = findMissing(arr, start, end);
    cout << result << " ";
}