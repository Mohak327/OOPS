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

		bool operator<=(String &a){
			if(s.length() <= a.s.length())
				return 1;
			return 0;
		}
};

int main()
{
	String a("Bruce");
	String b("Wayne");
    cout<<"\nString a is "<<a.s<<"\nString b is "<<b.s<<endl;
	if(a <= b){
		cout<<"length of a is less than or equal to length of b\n";
	}
	else{
		cout<<"length of a is greater than length of b\n";
	}
	return 0;
}