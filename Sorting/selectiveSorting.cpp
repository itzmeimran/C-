#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {4, 1, 2, 6, 8, 9, 3, 7, 5};

    //Selection Sort;
    
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;

        //inner loop ->index of min element in range i -> n;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; //new min element then store;
            }
        }


        //Swap elements
        swap(arr[i],arr[minIndex]);
    }

    //Printing all array elements
    
    for (int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}