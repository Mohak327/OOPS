

#include <iostream>
#include<conio.h>

using namespace std;

define NUM 5

class STUDENTS {
public:
    char name[20];
    int rollNo;
    int classNo;
    int marks;
    void getdata();
    void putdata();
};

void STUDENTS::getdata(void) {

    cout << "Name:";
    cin >> name;
    cout << "Roll no:";
    cin >> rollno;
    cout << "Class:";
    cin >> classNo;
    cout << "Marks:";
    cin >> marks;
}

void STUDENTS::putdata(void) {

    cout << "Name: "<< name;
    cout << "Roll No: "<< rollNo;
    cout << "Class: "<< classNo;
    cout << "Marks: "<< marks;
}

int main() {

    STUDENTS stud[5];

    int n;
    cout << "Enter no. of students you want to add: ";
    cin >> n;

    for (int i = 0; i < n; n++) {
        cout << "\nEnter the details of student-" << i + 1 <<"\n";
        stud[i].getdata();
    }

    for (int i = 0; i < n; n++) {
        cout <<"\nDetails of student-" << i + 1 <<"\n";
        stud[i].putdata();
    }

    return 0;
}
