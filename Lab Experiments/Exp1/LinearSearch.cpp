#include<bits/stdc++.h>
using namespace std;

class Array{
	public:
		int arr[10] = {13,29,35,48,5,46,43,12,98,23} ;
		void showArray(){
			int n = sizeof(arr)/sizeof(int);
			cout<<"The array is : ";
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
		}
		
		int linearSearch(int num){
			int n = sizeof(arr)/sizeof(int);
			for(int i=0;i<n;i++){
				if(arr[i]==num){
					return i+1;
				}
			}
			return -1;
		}
};

int main(){
	Array a;
	a.showArray();
	
	cout<<"\nEnter the element to search : ";
	int y;
	cin>>y;
	cout<<endl;
	int index = a.linearSearch(y);
	cout<<y<<" is present at : "<<index;

	return 0;
}

