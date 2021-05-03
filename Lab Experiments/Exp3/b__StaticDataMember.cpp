#include<iostream>

using namespace std;

class X {
    int codeno;
    float price;
    // Static data member
    static int count;

public:
    void getval(int i, float j){
        codeno = i;
        price = j;
        ++count;
    }

    void display(void) {
        cout <<" Code no :"<< codeno << " \t";
        cout <<" Price :"<< price << " \n" ;
    }

    // Static member function
    static void dispcount(void){
        cout <<" count = "<< count <<" \n";
    }
};

int X:: count = 0;

int main (){
    X Ob1, Ob2, Ob3;
    Ob1.getval(101, 25.12);
    Ob2.getval(102, 38.19);
    Ob3.getval(103, 49.00);
    X :: dispcount();

    Ob1.display();
    Ob2.display();
    Ob3.display();

    cout << "Made by: Mohak Sharma, 12-CSEA-19";
    return 0;
}
