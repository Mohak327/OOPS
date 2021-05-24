#include <iostream>
using namespace std;

class Length {
   private:
    int meter;
    int centimeter;

   public:
    Length(int m, int cm) {
        meter = m;
        centimeter = cm;
    }

    Length() {
        meter = 0;
        centimeter = 0;
    }

    void operator = (const Length &D ) {
        meter = D.meter;
        centimeter = D.centimeter;
    }

    void displayLength() {
        cout << meter <<  "m, " <<  centimeter << "cm" << endl;
    }
};

int main() {
   Length D1(11, 10), D2(5, 11);

   cout << "First Length: ";
   D1.displayLength();
   cout << "Second Length: ";
   D2.displayLength();

// Assignment overloading
   D1 = D2;
   cout << "Total Length: ";
   D1.displayLength();

   return 0;
}