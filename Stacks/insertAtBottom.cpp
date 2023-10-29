#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &st, int top)
{
    // base case
    if (st.empty())
    {
        st.push(top);
        return;
    }
    else
    {
        // recursion
        int temp = st.top();
        st.pop();
        insertAtBottom(st, top);
        // backtacking
        st.push(temp);
    }
}

int main()
{
    stack<int> st;
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // Pusing elements in stack
    for (int i = 0; i < 10; i++)
    {
        st.push(arr[i]);
    }
    // getting top element
    int top = st.top();
    st.pop();
    // Printing stack elements
  
    insertAtBottom(st, top);
    cout << "after" << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}