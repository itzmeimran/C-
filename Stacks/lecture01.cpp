// Implementation of stack data structure
// FILO -> this is a First In Last Out type of data structure;

#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public: // Properties
    int *arr;
    int size;
    int top;

     // Constructor code
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
   
public: // functions

    void push(int data)
    {
        if (size - top > 1)
        // space available
        {
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getSize()
    {
        if(top == -1){
            cout << "Stack is empty" << endl;
        }else{
            return top+1;
        }
    }
};

int main()
{
    stack<int> st;
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        st.push(arr[i]);
    };
    cout << "is stack empty " << st.empty() << endl;
    cout << "This is top element of stack " << st.top() << endl;
    cout << "This is size of stack " << st.size() << endl;
    // Printing all elements in stack;
    for (int i = 0; i < 5; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }

    
    return 0;
}
