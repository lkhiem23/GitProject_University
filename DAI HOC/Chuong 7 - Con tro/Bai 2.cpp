#include<iostream.h>
using namespace std;

int main(){
	int n;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;
	
	int a[n];
	int *p=a; 
	
	cout<<"Nhap so phan tu cho mang :\n";
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>*(p+i); 
	} 
	for(int i=0;i<n;i++){
		*(p+i)+=2; 
	} 
	cout<<"Xuat mang :\n"; 
	for(int i = 0 ; i < n; i++){
		cout<<"a["<<i<<"] = "<<*(p + i)<<endl;
	}
return 0;
} 
