#include <iostream>
#include<conio.h>
#include <math.h>

using namespace std;

class armstg {
    int rem, sum = 0;
    public:
        int numcpy;
        void check(int num);
};

void armstg :: check(int num) {
    if (num > 100 && num < 1000)
    {
        while (num > 0)
        {
            rem = num % 10;
            sum += rem * rem * rem;
            num /= 10;
        }

        if (numcpy == sum)
            cout << numcpy << " is an Armstrong number. ";
        else
            cout << numcpy << " is not an Armstrong number. ";
    } else
        cout<< " The number must be between 100 and 1000. ";
}

int main()
{
    armstg num1;

    int a;
    cout << "Enter a 3 - digit number: ";
    cin >> a;
    num1.numcpy = a;

    num1.check(a);

    cout<< "\nBy: Mohak Sharma\n12-CSEA-19";
    return 0;
}















