#include<iostream>
#include<vector>
using namespace std;

// template function to perform bubble sort on array, arr
// n: size of arr
template<typename T>
void BubbleSort(T arr[], int n)
{
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-i-1;++j){
			if(arr[j]>arr[j+1]){
				T temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Template function to print array
// n: size of arr[]
template<typename T>
void PrintArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n\n";
}

int main()
{
    int n, arr[50];
    cout << "\nEnter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << "Array Before Sorting: " << endl;
    PrintArray(arr, n);

    BubbleSort(arr, n);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr, n);
  	cout << "Made By: Mohak Sharma, 12-CSEA-19\n";
    return 0;
}