#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> arr, int target, int start, int end)
{
    int mid = start + (end - start) / 2;
    int ans = mid;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 7, 7, 7, 7, 7, 7, 7};
    int target = 7;
    int start = 0;
    int end = arr.size() - 1;
    int ans = firstOccurance(arr, target, start, end);
    cout << "first occurance is at index : " << ans;
}