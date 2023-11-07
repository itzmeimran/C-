#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

void reverseKelements(queue<int> &q, int k)
{
    stack<int> s;
    queue<int> ans;
    while (k--)
    {
        s.push(q.front());
        q.pop();
    }
    // Push all elements from the stack to queue in reverse order
    while (!s.empty())
    {
        ans.push(s.top());
        s.pop();
    }
    int n = q.size();

    // Push remaining elements of q in ans
    while (!q.empty())
    {
        ans.push(q.front());
        q.pop();
    }
    // copying all elements in q;
    while (!ans.empty())
    {
        q.push(ans.front());
        ans.pop();
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    queue<int> q;
    int k = 2;
    for (auto i : v)
    {
        q.push(i);
    }
    cout << "elements in q" << endl;

    reverseKelements(q, k);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}