// Code by: jindal2209

#include <bits/stdc++.h>
using namespace std;

class String {
	public:
		string s;
		String (){
		}
		String (string s){
			this->s = s;
		}

		String operator+(String &a){
			return s+a.s;
		}
};

void operator+(string a,string b){
	cout<<"Hi";
	return a+b;
}

int main()
{
	cout << "\n";
	String a("I am ");
	String b("Ironman");
	String c("") ;
	c = (a+b);
	cout<<"String a is "<<a.s<<"\nString b is "<<b.s<<"\nString c is "<<c.s;
	return 0;
}