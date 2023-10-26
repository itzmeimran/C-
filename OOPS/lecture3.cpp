#include <iostream>

using namespace std;

class Animal
{

public:
    virtual void speak() //here if i use virtual then i wll b using function of the Dog class else Animal class func is used
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal // inheriting animal class using public inheritance
{
    public:
    //over ride
        void speak(){
            cout << "barking" << endl;
        }
};

//Here Animal is a parent class and Dog is a child class ; 
  
int main()
{
    Animal *animal1 = new Animal();
    animal1->speak();

    Animal *animal2 = new Dog();
    animal2->speak();

    Dog *animal3 = new Dog();
    animal3->speak();

    Dog *animal4 =(Dog*) new Animal();
    animal4->speak();

//    //upCasting
//    Animal *animal = new Dog();
//    animal->speak();

//    //Down casting
//    Dog *b = (Dog*) new Animal();
//    b->speak();
}