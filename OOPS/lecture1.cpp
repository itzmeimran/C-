#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void printName()
    {
        cout << "My name is : " << name << endl;
    }
    void printAge()
    {
        cout << "My age is : " << age << endl;
    }
};

int main()
{
    Student Imran, Irfan, Arif;
    Imran.name = "Imran";
    Imran.age = 26;
    Irfan.name = "Irfan";
    Irfan.age = 25;
    Arif.name = "Shaik mohammad arif";
    Arif.age = 18;

    Imran.printName();
    Imran.printAge();
}