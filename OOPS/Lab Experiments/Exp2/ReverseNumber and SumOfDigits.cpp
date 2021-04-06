#include<bits/stdc++.h>
using namespace std;

class Number{
	int num;
	public:
		Number(int n){
			num = n;
		}
		
		int reverse(){
			int ans = 0,n=num;
			while(n){
				ans = ans*10 + n%10;
				n/=10;
			}
			return ans;
		}
		
		int sumofDigits(){
			int n = num;
			int ans=0;
			while(n){
				ans+=n%10;
				n/=10;
			}
			return ans;
		}
};

int main(){
	int num ;
	cout<<"Enter number: ";
	cin>>num;
	
	Number n(num);
	cout<<"Reversed number is: "<<n.reverse();
	cout<<"\nSum of digits is: "<<n.sumofDigits();

	return 0;
}

