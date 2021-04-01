#include<bits/stdc++.h>
using namespace std;

class Number{
	int num;
	public:
		Number(int n){
			num = n;
		}
		
		void printSeries(){
			for(int i=0;i<=num;i++){
				cout<<i<<" ";
			}
		}
};

int main(){
	int num ;
	cout<<"Enter number: ";
	cin>>num;
	
	Number n(num);
	n.printSeries();

	return 0;
}

