// Write a program to illustrate the concept of array of objects using classes

#include <iostream>
using namespace std;

class Basic{
    int a;
    int no;

public:
    void setDetails(int in, int n){
        a = in;
        no = n;
    }

    void print(){
        cout<<"\n id is "<<a<<"\t Name is "<<no;
    }
};

class Console{
    public:
        void details(){
            cout<<"\n\t Nidhi Singh \n";
            cout<<"\n\t 108-CSE-A \n";
        }

    };

int main(){
    Console console;
    console.details();

    Basic basic[4];
    for (int i = 0; i < 4; i++)
        basic[i].setDetails(i, i);

    for (int j = 0; j < 4; j++)
        basic[j].print();
}
