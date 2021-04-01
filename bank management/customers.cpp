#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class Bank {
    char name[20];
    int acc_no;
    char type[20];
    int balance;

    public:
        void read_account(){
            cout << "\nName: ";
gets (name);
            cout << "\nAccount No(4-digit): ";
cin >> acc_no;
            cout << "\nType of account: ";
gets (type);
            cout << "\nBalance: ";
cin >> balance;
        }

        void show_account(){
            cout << "\nName: " << name;
            cout << "\nAccount No: " << acc_no;
            cout << "\nType of account: " << type;
            cout << "\nBalance: " << balance;
        }
};

int main() {
    Bank account[5];

    account->read_account()

}

// #include <iostream>

// using namespace std;
// class bank{
//     int balance,accNo=0;
//     char type[100],name[100];
// public:
//     int retaccNO(){
//         return accNo;
//     }
//     void input();
//     void display();
//     void deposit();
//     void withdraw();
// }b[5];
// void bank::input()
// {
//     cout<<"enter name\n";
//     cin>>name;
//     cout<<"enter 6 digit acc no\n";
//     cin>>accNo;
//     cout<<"enter type\n";
//     cin>>type;

//     cout<<"Congratulations "<<name<<" your "<<type<<" acount with account number "<<accNo<<" has succesfully been created.Your opening balance is Rs 0\n";
// }

// void bank::display(){

//     cout<<name<<endl<<accNo<<endl<<type<<endl<<balance;
// }

// void bank::deposit(){
//     cout<<"enter amount you want to deposit";
//     int temp;
//     cin>>temp;
//     balance=balance+temp;
//     cout<<"your balance is :"<<balance;

// }
// void bank::withdraw(){
//     cout<<"enter amount you want to withdraw";
//     int temp;
//     cin>>temp;
//     balance=balance-temp;
//     cout<<"your balance is :"<<balance;

// }

// int main(int argc, const char * argv[]) {
//     for(int i=0;i<5;i++){
//     char a;
//         int ch=0;
//     cout<<"Do you have an existing account?";
//     cin>>a;
//     if(a=='y' || a== 'Y')
//     {
//         while(ch!=5){
//             cout<<"\n1.Modify details\n2.Deposit Amount\n3.Withdraw amount\n4.Display details\n5.Exit\n";
//             reenter: ;
//                 cout << "\nEnter choice: ";
//                 cin >> ch;
//                 switch (ch)
//                 {
//                 case 1:
//                     b[i].input();
//                     break;
//                 case 2:b[i].deposit();
//                     break;
//                 case 3:b[i].withdraw();
//                     break;
//                 case 4:
//                     b[i].display();
//                     break;
//                 case 5:
//                     exit(0);
//                     break;
//                 default:
//                     cout<<"choice wrong, renenter";
//                     goto reenter;
//                     break;
//             }}
//     }
//     else if(b[5].retaccNO()!=0
//             &&( a!='n' || a!='N'))
//         cout<<"bank full, no space for new user";
//     else
//     {
//                     b[i].input();

//     }

//     }
//     return 0;

// }