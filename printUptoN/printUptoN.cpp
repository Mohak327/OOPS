#include <iostream>
#include<conio.h>

using namespace std;

class printUptoN {
    public:
        int display(int num, int interval);
};

int printUptoN :: display(int num, int interval) {
            for (int i = 1; i < num+1; i += interval)
                cout <<" "<< i;
        }

int main() {
    printUptoN num1;
    int a, interval;

    cout<<"Enter a number upto which you want numbers to be printed: ";
    cin>>a;
    cout<<"Enter the interval: ";
    cin>>interval;

    num1.display(a, interval);

    cout<< "\n By: Mohak Sharma\n 12-CSEA-19";
    return 0;
}




