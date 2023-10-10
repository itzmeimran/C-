#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    // Step 1: Choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[pivotIndex];

    // Step 2: Counting for numbers which are less than pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivotElement)
        {
            count++;
        }
    }
    // Swapping pivot element in the right place
    swap(arr[pivotIndex], arr[pivotIndex + count]); // Fix the swap index
    // Update pivotIndex
    pivotIndex += count;

    // Step 3: Arrange small elements on the left and large elements on the right side of pivotElement
    int i, j;
    i = s;
    j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < arr[pivotIndex])
        {
            i++;
        }
        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);
    // Left part of array
    quickSort(arr, s, p - 1);
    // Right part of array
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr = {12, 6, 10, 2, 15, 18, 1}; //{1,2,6,10,12,15,18} sorted array
    int s = 0;
    int e = arr.size() - 1;
    quickSort(arr, s, e);
    for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
