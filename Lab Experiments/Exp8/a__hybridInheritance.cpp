#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "This is an Animal ";
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
    Rocky(){
        cout << "\nHe responds to the name Bucky! \n";
    }
};

int main()
{
    Bucky mydog;
    return 0;
}
