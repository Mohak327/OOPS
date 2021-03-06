//  Write a program to implement the concept of constructor and destructor

#include<iostream>
using namespace std;

class Sample {
    int i, j;
public:
    Sample(int a, int b) {
		cout<<"Constructing...\n";
        i = a;
        j = b;
    }

    ~Sample() {
        cout << "\nDestructing...";
    }

    void display(void){
        cout <<"First number :"<< i << " \t";
        cout <<"\nSecond number :"<< j << " \n" ;
    }
};

int main () {
    int num1, num2;
    cout << "enter 2 numbers: ";
    cin >> num1 >> num2;

	cout << "Initialising...\n";
    Sample s1(num1, num2);
    s1.display();

    cout << "\nMade by: Mohak Sharma, 12-CSEA-19\n\n";
    return 0;
}