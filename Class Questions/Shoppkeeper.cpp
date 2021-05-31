//A shopkeeper wants to maintain the stock database category wise (electronics appliances , 
//food items, clothing, milk product) specify all classes and functions as per the 
//relationship between different products.

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

class Stock{
	public:
		static int quantity;
		Stock(){
			quantity++;
		}
		~Stock(){
			quantity--;
		}
};

class Food:public Stock {
		public:
		static int foodquantity;
		Food(){
			foodquantity++;
		}
		~Food(){
			foodquantity--;
		}
};

class Dairy:public Stock{
	public:
		static int dairyquantity;
		Stock(){
			dairyquantity++;
		}
		~Stock(){
			dairyquantity--;
		}
};

int main(){
	fast_io;

	int t;
	cin>>t;
	while(t--){
	
	}

	return 0;
}


