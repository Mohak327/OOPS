#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
#define EPSILON 0.01

double func(double x) {
    return x*x*x - 2*x - 5;
}

void bisection(double a, double b) {
    double c = a;
    while ((b-a) >= EPSILON) {
        c = (a+b)/2;

        if (func(c) == 0.0)
            break;
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

int main()
{
    double a, b;
    cout << "Enter two initial(seed) values: ";
    cin >> a >> b;
    if (func(a) * func(b) >= 0) {
        cout << "Invalid values of a and b. Please re-enter: \n";
        cout << "Enter two initial(seed) values: ";
    }

    bisection(a, b);
    return 0;
}