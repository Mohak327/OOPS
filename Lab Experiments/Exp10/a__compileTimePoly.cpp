//  Compile time polymophism (operator/function polymorphism)

// You invoke the overloaded functions by matching the number and type of arguments. The information is present during compile-time. This means the C++ compiler will select the right function at compile time.

// Compile-time polymorphism is achieved through function overloading and operator overloading.

#include <iostream>
using namespace std;

void test(int i) {
	cout << "\n The int is " << i << endl;
}
void test(double  f) {
	cout << " The float is " << f << endl;
}
void test(char const *ch) {
	cout << " The char* is " << ch << endl;
}

int main() {
	test(5);
	test(5.0);
	test("five");
  	cout << "\nMade By: Mohak Sharma, 12-CSEA-19\n\n";
	return 0;
}