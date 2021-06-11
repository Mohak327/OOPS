// Code by: jindal2209

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream fout;
    fout.open("a.txt");
    string line;
    cout<<"Enter some line to write to file:\n";
    while(fout){
    	getline(cin,line);
    	if (line == "-1")
            break;
        fout<<line<<endl;
	}

	fstream fin;
	fin.open("a.txt");
	while(fin){
		getline(fin,line);
		cout<<line<<endl;
	}
	fin.close();
    return 0;
}