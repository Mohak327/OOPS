// Swap data members of two objects of a class using friend function.
#include <iostream>

using namespace std;

class class_2;

class class_1 {
    int num1;
public:
        void indata(int a)  {valuel = a;}
        void display(void)  {cout << valuel << "\n";}
        friend void exchange(class_1 &, class_2 &);
};

class class_2 {
    int num2;
public:
        void indata(int b)  {num2 = b;}
        void display(void)  {cout << num2 << "\n";}
        friend void exchange(class_1 &, class_2 &);
};


void exchange (class_1 &x, class_2 &y){
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
}

int main(){
    class_1 C1;
    class_2 C2;

    C1.indata(100);
    C2.indata(200);

    cout << "Before swapping: \n";
    C1.display();
    C2.display();

    exchange (C1, C2);

    cout <<"After swapping: \n";
    C1.display();
    C2.display();

    return 0;
}
