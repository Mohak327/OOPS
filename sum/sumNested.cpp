//Add 2 numbers using nested functions.
#include <iostream>
#include<conio.h>

using namespace std;

class sum {
    int add(int a, int b){
        return (a + b);
    }
    public:
        int display(int a, int b);
};

int sum :: display(int a, int b) {
    int result = sum::add(a, b);
    cout << "The sum is: " << result;
}

int main() {
    sum obj;
    int num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    obj.display(num1, num2);

    cout<< "\n\nBy: Mohak Sharma\n12-CSEA-19";
    return 0;
}



