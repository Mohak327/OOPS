#include <iostream>
using namespace std;

class Animal {
   public:
    void info() {
        cout << "I am an animal." << endl;
    }
};

class Dog : public Animal {
   public:
    void bark() {
        cout << "I am a Dog. Woof woof." << endl;
    }
};

int main() {
    Dog dog1;
    cout << "\nDog Class:" << endl;
    dog1.info();
    dog1.bark();


    return 0;
}