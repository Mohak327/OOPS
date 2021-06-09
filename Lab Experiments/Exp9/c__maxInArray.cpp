#include<iostream>
using namespace std;

// defining the function template that
// returns the largest number of the array
// we consider type of array size directly integer

template <class T>

T find_max(T t[], int size){
	T temp_max = t[0];
	for (int i = 0; i < size; i++){
		if (temp_max < t[i] ) {
			temp_max = t[i];
		}
	}
	return temp_max;
}

int main() {
	int numbers[50], N;
    cout << "\nEnter the size of array: ";
    cin >> N;
    cout<<"Enter " << N <<" numbers: ";
	for (int i = 0; i < N; i++)
		cin>>numbers[i];

	cout << "Largest number in the array is: "<< find_max(numbers,N);
  	cout << "\nMade By: Mohak Sharma, 12-CSEA-19\n\n";
	return 0;
}