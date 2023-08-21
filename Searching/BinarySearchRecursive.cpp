#include <iostream>

using namespace std;

int BinarySearch(int arr[], int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return BinarySearch(arr, target, start, mid - 1);
    }
    else
    {
        return BinarySearch(arr, target, mid + 1, end);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int target = 1;

    int result = BinarySearch(arr, target, 0, size - 1);

    if (result != -1)
    {
        cout << "Found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}