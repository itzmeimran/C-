
#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> &arr, int i, int n)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }
    // Condition to check if given arr is sorted
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    // recursive call for checking next element in array
    return isSorted(arr, i + 1, n);
}

int binarySearch(vector<int> &arr, int i, int n, int key)
{
    // base case;
    if (i > n)
    {
        cout << "key not found" << endl;

        return -1;
    }
    // finding mid
    int mid = i + (n - i) / 2;
    // solve one case here
    if (arr[mid] == key)
    {
        cout << "find key at index " << mid << endl;
        return mid;
    }

    return (arr[mid] < key) ? binarySearch(arr, mid + 1, n, key) : binarySearch(arr, i, mid - 1, key);

    // if arr[mid] > key  --> left search
}

void printSubSequences(string &str, string op, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << op << endl;
        return;
    }

    // exclude
    printSubSequences(str, op, i + 1);
    // Include
    op.push_back(str[i]);
    printSubSequences(str, op, i + 1);
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int i = 0;
    // int n = arr.size();
    // bool ans = isSorted(arr, i, n);
    // if (ans)
    // {
    //     cout << "Array is sorted" << endl;
    // }
    // else
    // {
    //     cout << "Array is not sorted" << endl;
    // }

    // int key = 10;
    // int a = binarySearch(arr, i, n, key);

    string str = "ab";
    string op = "";
    printSubSequences(str, op, i);
}