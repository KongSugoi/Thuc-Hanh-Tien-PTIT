#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, m, k, MAX=-1000000000, kt=0;
		cin >> n >> m;
		long a[n], b[n], i=0, j=0;
		while(n--){
			cin >> k;
			if(k<0){
				a[i++]=k;
			}else{
				b[j++]=k;
			}
			MAX=max(MAX,k);
		}
		for(int x=0; x<i; x++){
			if(a[x]==MAX && kt==0){
				cout << m <<" ";
				kt=1;
			}
			cout << a[x] <<" ";
		}
		for(int x=0; x<j; x++){
			if(b[x]==MAX&&kt==0){
				cout << m <<" ";
				kt=1;
			}
			cout << b[x] <<" ";
		}
		cout << endl;
	}
}

