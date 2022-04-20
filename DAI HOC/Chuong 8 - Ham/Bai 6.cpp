#include<iostream.h>
using namespace std;

int c(int n,int k){
	
	if (k==0||k==n)
	    return 1;
	if (k==1)
	    return n;
	else
		return c(n-1,k-1)+c(n-1,k); 
} 

int main(){
	int n,k;
	
	cout<<"Nhap phan tu n = ";
	cin>>n;
	cout<<"Nhap phan tu chap k =  ";
	cin >> k;
	
	cout << "To hop chap " << k << " cua " << n << " phan tu la: "<< c(n,k) <<endl; 
} 