#include<iostream>
#include<stdlib.h>
using namespace std;

class Base {
public:
    int a ;
};

class D1: virtual public Base {
public:
    int b;
};

class D2: virtual public Base {
public:
    int c;
};

class D3: public D1, public D2 {
public:
    int total;
    void getNumbers() {
        cout << "\nEnter the first number: ";
        cin >> a;

        cout << "Enter the second number: ";
        cin >> b;

        cout << "Enter the third number: ";
        cin >> c;
    }
};

int main() {
    system("cls");
    D3 ob ;
    ob.getNumbers();

    //unambiguous
    ob.total= ob.a + ob.b + ob.c;

    cout << "Sum of " << ob.a << ", " << ob.b << " and " << ob.c << " is " << ob.total;


    return 0;
}