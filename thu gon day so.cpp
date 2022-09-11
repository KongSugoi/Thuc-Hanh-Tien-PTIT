#include<bits/stdc++.h>
using namespace std;
int xuly(int a[] , int n){
		stack<int>s;
		for ( int i = 0 ; i < n ;i++){
			if ( s.empty() || (a[i]+s.top())%2 != 0)
			s.push(a[i]);
			else s.pop();
		}
		return s.size();
	}
int main (){
	int n;
	cin>>n;
	int a[100005];
	for ( int i = 0 ; i < n ;i++){
		cin>>a[i];
	}
	cout<<xuly(a,n);
}
