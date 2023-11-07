#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void reverseQ(queue<int> &q)
{
    stack<int> s;
    queue<int>ans;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    int n = ans.size();
    for (int i =0 ; i< n ; i++){
        cout<<ans.front()<<" ";
        ans.pop();
    }
}

void reverseRecursion(queue<int> & q){
    //base case
    if (q.empty()){
        return ;
    }

    //step 1
    int temp = q.front();
    q.pop();
    //step 2
    reverseRecursion(q);
    //step 3 backtrack
    q.push(temp);
}

int main()
{
    queue<int> q;
    int arr[] = {2, 4, 6, 8, 10};
    // Inserting elements in queue
    for (int i = 0; i < 5; i++)
    {
        q.push(arr[i]);
    }
    // Elements in queue

    int n = q.size();
    // cout << "size of q is : " << q.size() << endl;
    // cout << "Original queue : " << endl;
    // for (int i = 0; i < n ; i++)
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    cout << "After reversing" << endl;
    reverseRecursion(q);
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;

}