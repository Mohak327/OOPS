#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
#define endl "\n"
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define countsetb(n) __builtin_popcount(n)
#define ff first
#define ss second

template<class T>
int minElement(T*arr,int n){
	T minans = INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<minans)
		minans = arr[i];
	}
	return minans;
}


template<class U>
int maxElement(U*arr,int n){
	U maxans = INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxans)
		maxans = arr[i];
	}
	return maxans;
}

int32_t main(){
	fast_io;
	
	int n;
	cin>>n;
	int*arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"max: "<<maxElement(arr,n)<<endl;
	cout<<"min: "<<minElement(arr,n)<<endl;
	

	return 0;
}


