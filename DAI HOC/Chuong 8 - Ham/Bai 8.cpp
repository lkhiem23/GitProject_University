#include<iostream.h>
using namespace std;

int ucln(int a,int b){
	if(a==b)
		return a; 
	if(a>b){
		a -= b;
		return ucln(a,b); 
	}    
	else {
		b -= a;
		return ucln(a,b); 
	} 
} 
int main (){
	int a,b,c,x; 
	cout << "Nhap a: ";
	cin >> a; 
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c:";
	cin >> c; 
	
	x = ucln(a,b); 
	
	cout << "Uoc chung lon nhat cua ba so la: \n" << ucln(x,c) <<endl;  
} 