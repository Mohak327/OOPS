// Made By: Siddhant Chaddha

#include <iostream>
#include<ctype.h>

using namespace std;

int main()
{
    try{
    int num;
    char c;
    float f;
    cout<<"Choose a number between 1-10:";
    cin>>num;
        if(num>10){
            throw num;
        }
    cout<<"Enter an alphabet:";
    cin>>c;
        if(!isalpha(c)){
            throw 'c';
        }
    cout<<"Enter a value of pi upto 2 decimal digits:";
    cin>>f;
        if(f!=3.14){
            throw f;
        }
    }
    catch(int x){
        cout<<"Invalid number entered";
    }
    catch(char a){
    cout<<"Character entered "<<a<<" is not an alphabet";
    }
    catch(float f){
    cout<<f<<" is not the correct value";
    }
    return 0;
}
