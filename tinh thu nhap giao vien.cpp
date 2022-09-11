#include<bits/stdc++.h>
using namespace std;

int main(){
	string ma, ten;
	long luong, hs=0, pc;
	getline(cin,ma);
	if(ma[0]=='H'&&ma[1]=='T')	pc=2000000;
	if(ma[0]=='H'&&ma[1]=='P')	pc=900000;
	if(ma[0]=='G'&&ma[1]=='V')	pc=500000;
	hs=ma[3]-'0'+10*(ma[2]-'0');
	getline(cin, ten);
	cin >> luong;
	luong*=hs;
	luong+=pc;
	cout << ma <<" "<< ten <<" "<< hs <<" "<< pc <<" "<< luong <<endl;
}
/*
HP04
Tran Quoc Huy
1578000
*/

