//Write a program to implement the concept of constructor and destructor.
#include<iostream>
using namespace std;

class Number{
	public:
		Number(){
			cout<<"Constructor called\n";
		}
		~Number(){
			cout<<"Destructor called\n";
		}
};

int main(){
	cout<<"Initialising object\n";
	Number *n = new Number;
	cout<<"\nDeleting object\n";
	delete n;
	
	cout<<endl<<endl<<"Shubham Jindal\nCSE-A\n40";
	return 0;
}

