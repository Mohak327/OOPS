// Code by: jindal2209

#include<iostream>
using namespace std;

string addString(string a,string b){
	return a+b;
}

int main(){
    string s1 = "Hello";
    string s2 = "World";
    string s3 = addString(s1,s2);
    cout<<"\ns1: "<<s1<<"\ns2: "<<s2<<"\ns3: "<<s3;

    return 0;
}