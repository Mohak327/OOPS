/* Pointer to Object: This Pointer: InfoBrother:*/

#include<iostream>
using namespace std;

class Date{
private:
    short int dd, mm, yy;

public:
    Date() {
        dd = mm = yy = 0;
    }

    void getdata(int i, int j, int k) {
        dd = i;
        mm = j;
        yy = k;
    }

    void prndata(void) {
        cout<<" Date is "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
    }
};

int main() {
    Date D1;
    Date* dptr = new Date();
    dptr = &D1;


// ---------------------------------------------------------------------------------------------------------------------

    dptr->getdata(02, 01, 2000);

    cout<<"\nInitializing data members using the object pointer";
    cout<<"\n------------------------------------------------------\n";

    cout<<"Printing members using the object: ";
    D1.prndata();

    cout<<"Printing members using the object pointer: ";
    dptr->prndata();

    delete dptr;

    cout << "\nMade By: Mohak Sharma, 12-CSEA-19\n";
    return 0;
}