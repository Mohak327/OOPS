#include<bits/stdc++.h>
using namespace std;

class Number{
	int num;
	public:
		Number(int n){
			num = n;
		}
		
		bool Armstrong(){
			int n = num;
			int ans=0;
			while(n){
				ans+= pow(n%10,3) ;
				n/=10;
			}
			return ans==num;
		}
};

int main(){
	int num ;
	cout<<"Enter number: ";
	cin>>num;
	
	Number n(num);
	bool isAmstrong = n.Armstrong();
	if(isAmstrong){
		cout<<num<<" is Armstrong number";
	}
	else{
		cout<<num<<" is not Armstrong number";
	}


	return 0;
}

