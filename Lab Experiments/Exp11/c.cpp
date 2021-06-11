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

		string operator=(String &a){
			s = a.s;
			return s;
		}
};

int main()
{
	String a("Bruce");
	String b("Wayne");

	cout<<"String a is "<<a.s<<"\nString b is "<<b.s<<endl;
	a = b;
	cout<<"a is: "<<a.s;
	return 0;
}