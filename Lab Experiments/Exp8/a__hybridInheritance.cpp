#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "\n\nThis is an Animal ";
    }
};

//single inheritance
class Dog: public Animal{
public:
    Dog(){
        cout << ", a dog ";
    }
};

class Breed{
public:
    Breed(){
        cout << "of the Pomeranian breed.";
    }
};

//Multiple Inheritance
class Bucky: public Dog, public Breed{
public:
    Bucky(){
        cout << "\nHe responds to the name Bucky! \n";
    }
};

int main()
{
    Bucky mydog;
    cout << "Made By: Mohak Sharma, 12-CSEA-19\n\n";
    return 0;
}
