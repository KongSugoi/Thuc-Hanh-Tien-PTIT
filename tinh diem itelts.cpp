#include<bits/stdc++.h>
using namespace std;
float a[41];
void diem() {
	a[3]=2.5;
	a[4]=2.5;
	a[5]=3;
	a[6]=3;
	a[7]=3.5;
	a[8]=3.5;
	a[9]=3.5;
	a[10]=4;
	a[11]=4;
	a[12]=4;
	a[13]=4.5;
	a[14]=4.5;
	a[15]=4.5;
	a[16]=5;
	a[17]=5;
	a[18]=5;
	a[19]=5;
	a[20]=5.5;
	a[21]=5.5;
	a[22]=5.5;
	a[23]=6;
	a[24]=6;
	a[25]=6;
	a[26]=6;
	a[27]=6.5;
	a[28]=6.5;
	a[29]=6.5;
	a[30]=7;
	a[31]=7;
	a[32]=7;
	a[33]=7.5;
	a[34]=7.5;
	a[35]=8;
	a[36]=8;
	a[37]=8.5;
	a[38]=8.5;
	a[39]=9;
	a[40]=9;
}

int main() {
	diem();
	int t;
	cin >>t;
	while(t--){
		int x, y;
		float m,n, sum;
		cin >> x >> y >> m >> n;
		sum=m+n;
		sum+=a[x]+a[y];
		sum/=4;
		y=sum;
		sum*=100;
		x=sum;
		x%=100;
		sum/=100;
		if( x>=25 && x<75){
			sum=y+0.5;
			cout <<fixed << setprecision(1) << sum <<endl;
			continue;
		}
		if(x>=75){
			sum=y+1;
			cout <<fixed << setprecision(1) << sum <<endl;
			continue;
		}
		if(x<25){
			sum=y+0.0;
			cout <<fixed << setprecision(1) << sum <<endl;
			continue;
		}
		cout <<fixed << setprecision(1) << sum <<endl;
	}
}

