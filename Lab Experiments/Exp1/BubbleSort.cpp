#include<bits/stdc++.h>
using namespace std;

class Array{
	int*arr;
	int n;
	public:
		Array(int n){
			this->n = n;
			arr = new int[n];	
		}
		
		void inputArray(){
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
		
		void showArray(){
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
		}
		
		void bubbleSort(){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(arr[i]<arr[j]){
						swap(arr[i],arr[j]);
					}
				}
			}
		}
};

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	Array a(n);
	cout<<"Enter the elements of array: ";
	a.inputArray();
	cout<<"The unsorted array is \n";
	a.showArray();
	
	a.bubbleSort();
	cout<<"\nThe sorted array is: ";
	a.showArray();
	
	
	return 0;
}

