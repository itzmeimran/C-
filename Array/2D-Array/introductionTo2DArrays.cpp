#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int>ans;
    int ans = 0;
    int colsum = 0;
    // Initializing 2D array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {8, 9, 10}};
    cout << "The elements of the matrix are: \n";
    cout << "Row wise printing" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //Row wise printing
            cout << arr[i][j] << " ";

            // ans += arr[i][j];
        }
        cout << endl;

        // ans = 0;
    }

    cout << "Column wise printing" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // Column wise printing
            cout << arr[j][i] << " ";

            // Printing col sum

            // colsum += arr[j][i];
        }
            // cout << colsum;
        cout << endl;
        // colsum = 0;
    }
}