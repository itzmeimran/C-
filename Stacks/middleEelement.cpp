#include<iostream>
#include<stack>

using namespace std;

void printMiddleElement(stack<int> &st,int totalSize){
    //base case
    if(st.size() == totalSize/2+1){
        cout << "This is middle element: " << st.top() << endl;
        return ;
    }
    //store top element in temp and pop the top element 
    int temp = st.top();
    st.pop();
    //recursively call for remaining stack elements
    printMiddleElement(st,totalSize);
    //backtack
    st.push(temp);
}

int main(){
    stack<int>st ; 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(8 0);
    int totalSize = st.size();
    printMiddleElement(st, totalSize);
}