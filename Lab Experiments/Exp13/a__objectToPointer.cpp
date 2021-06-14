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
        cout<<"\nData is "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
    }
};

int main() {
    Date D1; //simple object having type Data:
    Date *dptr; //Pointer Object having type Date:
    dptr = &D1;

// Creating class object by stack/heap method
    // MyClass myClass;
    // myClass.DoSomething();

// Dynamic creation of class object
    // Date* dptr = new Date();
    // dptr->DoSomething();
    // delete dptr;

    cout<<"\nInitializing data members using the object, with values 17, 09, 2001"<<endl;
    D1.getdata(17, 09, 2001);

    cout<<"Printing members using the object ";
    D1.prndata();

    cout<<"Printing members using the object pointer ";
    dptr->prndata();

// ---------------------------------------------------------------------------------------------------------------------

    cout<<"\nInitializing data members using the object pointer, with values 02, 01, 2000"<<endl;
    dptr->getdata(02, 01, 2000);

    cout<<"printing members using the object ";
    D1.prndata();

    cout<<"Printing members using the object pointer ";
    dptr->prndata();

    return 0;
}