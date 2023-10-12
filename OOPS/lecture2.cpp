#include <iostream>

using namespace std;

class superBikes
{
    // Perfect encapsulation as the data memebers are completely private

private: // all the data members are privately marked and hence it is considered as perfect encapsulation ;
    string name;
    int price;
    int model;

public: // All the data functions are public marked
    string getName()
    {
        cout << "Name : " << name << endl;
    }
    int getPrice()
    {
        cout << "Price : " << price << endl;
    }
    int getModel()
    {
        cout << "Model : " << model << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPrice(int price)
    {
        this->price = price;
    }
    void setModel(int model)
    {
        this->model = model;
    }
};

class superCars : public superBikes // There are 3 modes of inheritance public, private, protected and this is public mode of inheritance;
{
};



int main()
{
    superBikes *Kawasaki_Ninja, *KTM = new superBikes;
    Kawasaki_Ninja->setName("KawaSaki2022");
    Kawasaki_Ninja->setPrice(320000); // we are using setter funciton to set the model
    Kawasaki_Ninja->setModel(2022);
    Kawasaki_Ninja->getName(); // we are using getter function to get the model ;
    Kawasaki_Ninja->getModel();
    Kawasaki_Ninja->getPrice();

    superCars *Ford = new superCars;
    Ford->setName("Ford Mustang");
    Ford->setPrice(560000);
    Ford->getName();
    Ford->getPrice();
}