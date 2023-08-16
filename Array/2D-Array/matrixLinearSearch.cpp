#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int arr[3][3] = {{1, 11, 3}, {24, 15, 6}, {48, 89, 12}};

bool linearSearch(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int minmax(int arr[][3], int row, int col)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum is : " << min;
    cout << endl;
    cout << "Maximum is : " << max;
    cout << endl;
    return 0;
}

int transpose (int arr[][3],int row, int col){
    
    //Before Transpose of array
    for (int i=0; i<row ; i++){
        for (int j=0; j<col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Transpose of Array
    for (int i=0; i<row ; i++){
        for (int j=0; j<col ; j++){
            swap(arr[i][j], arr[j][i]);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   
}

int main()
{
    // bool ans = linearSearch(arr, 3, 3, 12);
    // cout << "Result: " << (ans ? "true" : "false") << endl;
    // int minmx = minmax(arr, 3, 3);
    // int transpo  = transpose(arr,3,3);

    return 0;
}
