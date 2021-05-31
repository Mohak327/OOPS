// Made By: Siddhant Chaddha

#include <iostream>

using namespace std;

void checkAge(int age){
    try{
        if(age>=18){
            cout<<"You are eligible to vote.";
        }
        else{
            throw age;
        }
    }
    catch(int x){
        cout<<"You must be atleast 18 years old to vote.";
    }
}

int main()
{
    checkAge(19);
    return 0;
}

