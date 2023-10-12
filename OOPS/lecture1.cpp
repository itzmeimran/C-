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

    Student *Jacob = new Student; //creating a new entry in Dynamic memory
    Jacob->name = "Jacob";
    Jacob->age = 30;
    
    // Printing the names of all students using function pointers
    Jacob->printName(); // instead of using  . we are using -> to print a function as it is alloted using dynamic memory;
    Jacob->printAge(); // instead of using  . we are using -> to print a function as it is alloted using dynamic memory; 
    Imran.printName(); 
    Imran.printAge();


}