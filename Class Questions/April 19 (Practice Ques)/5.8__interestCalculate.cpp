#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class interest {
    int t;
    float p;
public:
    void get() {
    cout << "Enter principle amount: ";
    cin >> p;
    cout << "Enter time since deposit (years): ";
    cin >> t;

    }
    void cal(float rate) {
        float si, ci, n;
        n = 1;
        si = (p * t * rate) / 100;
        cout << "\nSimple Interest (Annually): " << si;
        ci = p * pow((1 + (rate/100)/n), n*t) - p;
        cout << "\nCompound Interest (Compounded anually): " << ci;
    }
};

int main()
{
interest value;

float rate;
cout<<"\nEnter rate of interest: ";
cin >> rate;

value.get();
value.cal(rate);
return 0;
}

