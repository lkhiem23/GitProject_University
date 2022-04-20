#include<iostream.h>
using namespace std;

int main(){
	int i,n;
	float s;
	
	cout << "\nNhap n = ";
	cin >> n;
	
	s = 0;
	
	do{
	
	if(n<1){
	cout << "\nSo n phai lon hon 1, vui long nhap lai!";
	}
	
	}while(n<1);
		for(i=1;i<=n;i++){
			s = s + (2*i-1);
		}
		
		cout << "\nTong cua S = 1 + 3 + 5 + ... + (2n-1) la:"<< s <<endl;
	
	return 0;
}