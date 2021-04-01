#include <iostream>
#include<conio.h>

using namespace std;

class rev {
    int d, r;
    public:
        int cal(int num);
        int digiSum(int num);
};

int rev :: cal(int num) {
    r=0;
    while(num>0) {
        d = num%10;
        r = r*10+d;
        num = num/10;
    }
    cout<<"Reverse of the number: "<<r;
}

int rev :: digiSum(int num) {
    int sum = 0;
    while(num!=0) {
        sum = sum + num % 10;
        num = num/10;
    }
    cout<<"\nSum of digits: "<<sum;
}

int main() {
    rev num1;

    int a;
    cout<<"Enter a number: ";
    cin>>a;

    num1.cal(a);
    num1.digiSum(a);
    return 0;
}

