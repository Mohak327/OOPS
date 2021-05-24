//Write a program to overload binary(+) operator
#include<iostream>
using namespace std;

class Complex {
    int real, imag;
	public:
	    Complex(int r = 0, int i =0){
			real = r;   imag = i;
		}

	    Complex operator + (Complex const &obj) {
	         Complex res;
	         res.real = real + obj.real;
	         res.imag = imag + obj.imag;
	         return res;
	    }
	    void printNumber(){
			cout<<"Real part: "<<this->real<<endl;
			cout<<"Imaginary part: "<<this->imag<<endl;
		}
};

int main(){
    Complex c1(10, 5), c2(2, 4);
    cout<<"c1"<<endl;
    c1.printNumber();
    cout<<endl;

    cout<<"c2"<<endl;
    c2.printNumber();
    cout<<endl;

	Complex c3 = c1 + c2;
    cout<<"c3"<<endl;
	c3.printNumber();


    cout<<endl<<endl<<"Shubham Jindal\nCSE-A\n40";
}
