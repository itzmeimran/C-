#include <iostream>
#include <vector>

using namespace std;

//

int firstOccurance(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == target)
        {
            ans = m;
            // Conduction search in Left side for first Occurance
            e = m - 1;
        }
        else if (arr[m] < target)
        { // It means element < target so we find target in right side of array
            s = m + 1;
        }
        else
        { // It means element > target so we find target in left part of array
            e = m - 1;
        }

        // Update mid value after each iteration

        m = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurance(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == target)
        {
            ans = m;
            // Condutcting Right side search
            s = m + 1;
        }
        else if (arr[m] < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }

        // Update mid value after each iteration

        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3, 4, 5, 6, 6, 6, 6, 7};
    int target = 1;
    int firstOcc = firstOccurance(arr, target);
    int lastOcc = lastOccurance(arr, target);
    int totalOccurance = lastOcc - firstOcc;
    cout << "First & Last Occurance of " << target << " is at index " << firstOcc << " & " << lastOcc << endl;
    cout << "Total Number of Occurance is : " << totalOccurance+1 << endl;
}

//Time Complexity O(logN) as it is BianrySearch ; 

