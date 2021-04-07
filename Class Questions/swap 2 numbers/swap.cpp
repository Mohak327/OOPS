#include <iostream>
#include<conio.h>

using namespace std;

class exchange {
    public:
        int func(int num1, int num2) {
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
            cout<<"\nFirst number is : "<<num1;
            cout<<"\nSecond number is : "<<num2;
        }
}obj;

int main() {
    exchange obj;

    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"\nBefore swapping ";
    cout<<"\nFirst number is : "<<a;
    cout<<"\nSecond number is : "<<b;

    cout<<"\n\nAfter swapping ";
    obj.func(a, b);

    cout<< "\n By: Mohak Sharma\n 12-CSEA-19";
    return 0;
}

