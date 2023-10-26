#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;
    //Default constructor
    Stack() : size(0), arr(nullptr), top(-1) {}
    //Parameterized constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Functions
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
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return top + 1;
        }
    }
};

int main()
{
    Stack s(10); //here we are passing size of stack;
    s.push(20);
    s.push(25);
    s.push(30);
    s.push(10);
    s.push(45);
    s.push(50);
    
    while (!s.isEmpty()){
        cout << s.getTop() << " " ;
        s.pop();
    }

}