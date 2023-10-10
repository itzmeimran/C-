#include <iostream>
#include <vector>

using namespace std;

// Merge sort Algorithm -->

// 1. Divide array into 2 equal halves
// 2. Sort both array
// 3. Create a new array and compare values of both array & append smaller values to new array accordingly & make sure no values remains
// 4. Copy all the values of new array to left part of divided array and return



void mergeTwoArr(vector<int> &arr, int s, int m, int e) // here we are passing array by reference
{
    // calculating len of left and rigt
    int n1 = m - s + 1;
    int n2 = e - m;
    // Creating two arrays left and right
    vector<int> left(n1);
    vector<int> right(n2);
    // copy data to both arrays
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[s + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = s;

    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // copying remaining elements to arr
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // Find the middle point
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    mergeTwoArr(arr, s, mid, e);
}

int main()
{
    // vector<int> arr1 = {10, 20, 30, 40};
    // vector<int> arr2 = {50, 60, 70};
    // int n1 = arr1.size();
    // int n2 = arr2.size();
    // mergeTwoArray(arr1, arr2, n1, n2);

    vector<int> arr = {10, 50, 20, 40, 30, 5, 1};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);
    for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
