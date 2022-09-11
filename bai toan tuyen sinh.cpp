#include<bits/stdc++.h>
using namespace std;

int main(){
	string ma, ten;
	float diem=0, k, dut=0;
	getline(cin, ma);
	getline(cin, ten);
	cin >>k;
	diem+=k+k;
	cin >>k;
	diem+=k;
	cin >>k;
	diem+=k;
	
	if(ma[2]=='1')		dut = 0.5;
	if(ma[2]=='2')		dut = 1;
	if(ma[2]=='3')		dut = 2.5;
	cout << ma <<" "<< ten <<" ";
	
	int t;
	t=dut*10;
	if(t%10!=0)		cout <<fixed << setprecision(1) << dut <<" ";
	else			cout <<dut <<" ";

	t=diem*10;
	if(t%10!=0)		cout <<fixed << setprecision(1) << diem <<" ";
	else			cout <<diem <<" ";

	if(diem+dut<24){
		cout <<"TRUOT";
	}else{
		cout << "TRUNG TUYEN";
	}
}
/*
KV2A002
Hoang Thanh Tuan
5
6
5
*/

