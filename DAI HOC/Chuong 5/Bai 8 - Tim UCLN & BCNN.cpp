#include<iostream.h>
using namespace std;

int ucln(int a,int b){
	
	while(a!=b){
		if (a<b){
			b=a-b; 
		} 
		else{
			a=a-b; 
		} 
	} return a; 
} 

int main(){
	int a,b;
	
	cout << "\nNhap a = ";
	cin >> a;
	cout << "\nNhap b = ";
	cin >> b; 
	cout << "\nUoc chung lon nhat la : " << ucln(a,b) << endl; 
	cout << "\nBoi chung nho nhat la : " << (a*b)/ucln(a,b) <<endl; 
	
	return 0; 
}
