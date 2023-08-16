#include <iostream>
#include <vector>

using namespace std;

vector<int> arr{0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1};

// Method 1
int method1(vector<int> arr)
{
    int z = 0;
    int o = 0;
    vector<int> ans;

    // Counting all the zeros and ones

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            z += 1;
        }
        else
        {
            o += 1;
        }
    }

    // Adding zeros in vector
    for (int i = 0; i < z; i++)
    {
        ans.push_back(0);
    }

    // Adding ones in vector
    for (int i = 0; i < o; i++)
    {
        ans.push_back(1);
    }

    // Printing Vector
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int method2(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (start <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "Method 1 " << endl;

    int m1 = method1(arr);
    cout << endl;
    cout << "Method 2 " << endl;

    int m2 = method2(arr);
}
