#include<iostream.h>
using namespace std;

int dequy(int n){
	if (n==1){
		return 1; 
	} 
	else{
		return n + dequy(n-1); 
	} 
} 
int main(){
	int n;
	cout<<"\nNhap n: ";
	cin>>n; 
	cout<<"Tong s = 1 + 2 + 3 + .. + (n-1) + n la : "<< dequy(n) <<endl; 
} 