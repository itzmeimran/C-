#include <iostream>
using namespace std;

int arr[] = {2, 4, 6, 8, 10, 12, 14};
int start = 0;
int endidx = 6;

int reverse(int arr[])
{
    while (start < endidx)
    {
       

        swap(arr[start], arr[endidx]);
        start++;
        endidx--;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    //Printing extreme elements of array

    while (true)
    {
        if (start > endidx)
        {
            break;
        }

        if (start == endidx)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[endidx] << " ";
        }
        start++;
        endidx--;
    }

    // Reversing array elements

    reverse(arr);

    return 0;
}