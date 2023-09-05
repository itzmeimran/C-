#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "length :" << str.length() << endl;
    cout << "isEmpty" << str.empty() << endl;

    str.push_back('@');
    cout << "After pushing value at end " << str << endl;
    str.pop_back();
    cout << "After popping last value" << str << endl;
    cout << str.substr(0,4)<< endl;
}