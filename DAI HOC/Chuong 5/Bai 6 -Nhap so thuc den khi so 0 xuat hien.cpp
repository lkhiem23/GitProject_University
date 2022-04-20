#include<iostream.h>
using namespace std;

int main(){
	
	int a;
	float dem=-1,s=0,am=0; 
	
	while(a!=0){
		
		cout<<"\nNhap a = ";
		cin>>a;
	    
		dem++;
	    s+=a; 
	    
		if (a<0){
    		am++; 
    	} 
	} 
	cout << "\nSo phan tu da nhap la : " << dem <<endl;
	cout <<	"Gia tri tbc cua day la: " << s/dem <<endl;
	cout << "So phan tu am la : "<< am <<endl; 
	
return 0;
}