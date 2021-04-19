

#include <iostream>
using namespace std;

define NUM 5

class Student {
public:
    char name[20];
    int rollNo;
    int classNo;
    int marks;
    void getdata(void);
    void putdata(void);
};

void Student::getdata(void) {

    char Student::*ptrname = &Student::name;
    int Student::*ptrroll = &Student::rollNo;
    int Student::*ptrclass = &Student::classNo;
    int Student::*ptrmarks = &Student::marks;

    cout << "Name:";
    cin >> *ptrname;
    cout << "Roll no:";
    cin >> *ptrroll;
    cout << "Class:";
    cin >> *ptrclass;
    cout << "Marks:";
    cin >> *ptrmarks;
}

void Student::putdata(void) {
    cout << "Name: "<< name;
    cout << "Roll No: "<< rollNo;
    cout << "Class: "<< classNo;
    cout << "Marks: "<< marks;
}

int main() {

    int n;
    cout << "Enter no. of students you want to add: ";
    cin >> n;

    for (int i = 0; i < n; n++) {
        cout << "Enter the details of student-" << i + 1 <<"\n";
        stud[i].getdata();
    }

    for (int i = 0; i < n; n++) {
        cout << "Details of student-" << i + 1 <<"\n";
        stud[i].putdata();
    }
}



// int main (){
//     int Student ::*ptr = &Student::id;
//     Student s[4];
//     for (int i = 0; i < 5;i++){
//         cout << "Enter student id : ";
//         cin >>s[i].*ptr;
//     }

//     for (int y = 0; y < 5;y++){
//         cout <<"\n"<<s[y].getId();
//     }
// }