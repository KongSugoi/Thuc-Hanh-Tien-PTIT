#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n]={0}, i=0, dem, arr[100], m=0;
	cin.ignore();
	for(int i=0; i<n; i++){
		dem=0;
		string a, k;
		getline(cin, a);
		stringstream s(a);
		while(s>>k){
			dem++;
		}
		A[i]=dem;
	}
	dem=0;
	for(int j=0; j<n-1; j++){
		if(A[j]==6&&A[j+1]==8){
			arr[m++]=1;
			continue;
		}
		if(A[j]==7&&A[j+1]==7&&A[j+2]==7&&A[j+3]==7){
			arr[m++]=2;
			j+=3;
		}
	}
	for(int i=0; i<m; i++){
		if(arr[i]==1&&i<m-1){
			i++;
			while(arr[i]==1){
				arr[i]=0;
				i++;
			}
			i--;
			dem++;
			continue;
		}
		if(arr[i]==2){
			dem++;
		}
	}
	cout << dem << endl;
	for(int i=0; i<m; i++){
		if(arr[i]!=0){
			cout << arr[i]<<endl;
		}
	}
}
/*
8
Minh ve minh co nho ta
Muoi lam nam ay thiet tha man nong
Minh ve minh co nho khong
Nhin cay nho nui nhin song nho nguon
Mot canh hai canh lai ba canh
Tran troc ban khoan giac chang lanh
Canh bon canh nam vua chop mat
Sao vang nam canh mong hon bay
*/

