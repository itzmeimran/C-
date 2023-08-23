#include <iostream>
#include <vector>

using namespace std;

int lastOccurance(vector<int> arr, int target)
{
    int n = arr.size();
    int ans = -1;
    for (int e = n - 1; e >= 0; e--)
    {
        if (arr[e] == target)
        {
            ans = e;
            break;
        }
    }
    return ans;
}
int firstOccurance(vector<int> arr, int target)
{
    int n = arr.size();
    int ans = -1;
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i] == target)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9};
    int target = 5;
    int result1 = lastOccurance(arr, target);
    int result2 = firstOccurance(arr, target);
    cout << "first occurance is at index : " << result2;
    cout << endl;
    cout << "Last occurance is at index : " << result1;
}