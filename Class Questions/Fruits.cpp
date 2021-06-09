//Make a class named Fruit with a data member to calculate the number of fruits in a basket.

//Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
//Print the number of fruits of each type and the total number of fruits in the basket.

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define endl "\n"
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define countsetb(n) __builtin_popcount(n)

class Fruit{
	public:
	static int countall;
		Fruit(){
			countall++;
		}
		~Fruit(){
			countall--;
		}
};

class Apple: public Fruit{
	public:
	static int countapple;
		Apple(){
			countapple++;
		}
		~Apple(){
			countapple--;
		}

};

class Mango: public Fruit{
	public:
		static int countmango;
		Mango(){
			countmango++;
		}
		~Mango(){
			countmango--;
		}
};

int Fruit::countall = 0;
int Apple::countapple = 0;
int Mango::countmango = 0;

int main(){
	fast_io;

	Apple a1,a2,a3,a4;
	Mango m1,m2,m3,m4,m5,m6,m7;
	cout<<"Total appples: "<<Apple::countapple<<endl;
	cout<<"Total mangoes: "<<Mango::countmango<<endl;
	cout<<"Total fruits: "<<Fruit::countall<<endl;

	return 0;
}


