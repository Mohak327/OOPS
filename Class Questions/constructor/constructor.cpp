// Create a class named distance using constructor . Data members are inches and feet Write the functions to add two distance values. Display result. Input values will be from user.

#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
  public:
    void getdata(void) {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    // Constructor declaration
        Distance(int, int);

    void putdata(void) {
        cout << "\nSum of distances is\n";
        cout << "feet = " << feet;
        cout << "\ninches = " << inches;
    }

    void add(Distance d1, Distance d2) {
			feet = d1.feet + d2.feet;
			inches = d1.inches + d2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};

// Constructor definition
Distance :: Distance(int f, int i){
    feet = f;
    inches = i;
}

int main() {
    Distance d1, d2, d3;
    cout << "\nDistance-1" ;
    d1.getdata();

    cout << "\nDistance-2" ;
    d2.getdata();

    d3.add(d1, d2);
    d3.putdata();

    return 0;
}
