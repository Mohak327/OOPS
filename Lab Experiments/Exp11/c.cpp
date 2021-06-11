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

		String operator=(String &a){
			s = a.s;
			return s;
		}
};

int main()
{
	String a("Bruce");
	String b("Banner");

	cout<<"\nString a is "<<a.s<<"\nString b is "<<b.s<<endl;
	a = b;
	cout<<"String a after copy is: "<<a.s;
	return 0;
}