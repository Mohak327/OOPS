// Write a program to implement the concept of call by reference using friend function.

#include<iostream>
using namespace std;

class Decimal;

class Number{
	public:
		void modify(Decimal &x);
};

class Decimal{
	int c=25,d=15;
	public:
		void print(){
			cout<<"c = "<<c<<endl;
			cout<<"d = "<<d<<endl; 
		}
		friend void Number::modify(Decimal &x);
};

void Number::modify(Decimal &x){
	x.c += 10;
	x.d += 10;
}

int main(){
	Number a;
	Decimal b;
	cout<<"Initially\n";
	b.print();
	a.modify(b);
	cout<<"Modified Values\n";
	b.print();
	return 0;
}
