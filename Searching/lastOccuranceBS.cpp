#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> arr, int target, int start, int end)
{
    int mid = start + (end - start) / 2;
    int ans = mid;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            //Because of first Occurance we have to search in right section not in left
            start = mid + 1;
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
    int ans = lastOccurance(arr, target, start, end);
    cout << "last occurance is at index : " << ans;
}