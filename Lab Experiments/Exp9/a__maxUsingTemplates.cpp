#include<iostream>
using namespace std;

template<class Test> Test FindLargest(Test num1,Test num2, Test num3) {
	if(num1>=num2) {
		if(num1>=num3)
			return num1;
		else
			return num3;
	}
	else {
		if(num2 >= num3)
			return num2;
		else
			return num3;
	}
}
int main() {
	int num1, num2, num3, largest;

	cout << "\n\nEnter three Numbers: ";
	cin >> num1 >> num2 >> num3;
	largest = FindLargest(num1,num2,num3);

	cout << "\nLargest Number is : " << largest;
  	cout << "\nMade By: Mohak Sharma, 12-CSEA-19\n\n";
	return 0;
}