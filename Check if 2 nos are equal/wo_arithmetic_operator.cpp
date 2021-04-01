#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a ^ b)
        cout << "The numbers are unequal.";
    else
        cout << "The numbers are equal.";
}