#include <iostream>
#include <stack>

using namespace std;

void reverseString(stack<char>str){
    while (!str.empty()){
        cout << str.top();
        str.pop();
    }
}

int main(){
    stack<char>str ;
    str.push('i');
    str.push('m');
    str.push('r');
    str.push('a');
    str.push('n');
    reverseString(str);
}