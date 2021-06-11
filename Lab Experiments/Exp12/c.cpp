#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char str[100];
    int i,vowels=0;

    cout<<"\nEnter the string : ";
    gets(str);

    for(i=0;str[i];i++) {
        if(str[i]=='a'
            || str[i]=='e'
            ||str[i]=='i'
            ||str[i]=='o'
            ||str[i]=='u'
            ||str[i]=='A'
            ||str[i]=='E'
            ||str[i]=='I'
            ||str[i]=='O'
            ||str[i]=='U'
        )
		    vowels++;
    }

    //Printing the count of vowels.
    cout<<"The number of vowels in the string: "<<vowels;


    return 0;
}