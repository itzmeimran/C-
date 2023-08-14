#include <iostream>
using namespace std;

int arr[] = {0, 1, 0, 1, 0, 1, 0, 1, 1, 1};
int n = sizeof(arr) / sizeof(int);

int main()
{
    int noOfZeros = 0;
    int noOfOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            noOfZeros++;
        }
        else
        {
            noOfOnes++;
        }
    }
    cout << "No of zeros " << noOfZeros << endl;
    cout << "No of ones " << noOfOnes;
}