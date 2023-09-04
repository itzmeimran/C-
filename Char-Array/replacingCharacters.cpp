#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void replaceChar(char str[], char c)
{
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = c;
        }
    }
}

int main()
{
    char str[100];
    char c;
    cout << "Enter string : " << endl;
    cin.getline(str, 100);
    cout << "Which character do you want to replace : " << endl;
    cin >> c;
    replaceChar(str, c);
    cout << "New string is : " << str;
}