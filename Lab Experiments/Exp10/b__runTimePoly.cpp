// This happens when an object's method is invoked/called during runtime rather than during compile time. Runtime polymorphism is achieved through function overriding. The function to be called/invoked is established during runtime.

#include <iostream>
using namespace std;

class Alive {
public:
	void breathe() {
		cout << "\nHumans breathe.";
	}
};

class Dead: public Alive {
public:
	void breathe() {
		cout << "\nBut dead ones don't...";
	}
};

int main() {
    Alive a;
    Dead d;
    a.breathe();
    d.breathe();
  	cout << "\nMade By: Mohak Sharma, 12-CSEA-19\n\n";
	return 0;
}