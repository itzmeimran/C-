#include <iostream>

using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    // functions
    void push1(int data)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = data;
        }
        else
        {
            cout << "Stack overflow stack 1" << endl;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 > 1)
        {

            top2--;
            arr[top2] = data;
        }
        else
        {
            cout << "Stack overflow stack 2" << endl;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack is underflow stack 1" << endl;
        }
        else
        {
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack is underflow stack 2 " << endl;
        }
        else
        {
            top2++;
        }
    }
    int getTop1()
    {
        if (top1 == -1)
        {
            
            cout << "Stack is empty " <<  endl;
        }
        else
        {
            return arr[top1];
        }
    }
    int getTop2()
    {
        if (top2 == size)
        {
            cout << "Stack is empty" << endl;
            top2 = size;
        }
        else
        {
            return arr[top2];
        }
    }
    int getSize1()
    {
        return top1 + 1;
    }
    int getSize2()
    {
        return size - top2;
    }
    bool empty1()
    {
        if (top1 == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool empty2()
    {
        if (top2 == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(10);
    s.push2(30);
    // s.getTop1();
    s.getTop2();
    // s.push1(40);
    // s.push1(50);
    // s.push2(60);
    // s.push2(70);
    // s.push2(80);
   
}