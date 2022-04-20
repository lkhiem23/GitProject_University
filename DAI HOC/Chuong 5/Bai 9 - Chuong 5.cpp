#include<iostream.h>
using namespace std;

int main(){
	cout << "Tinh tong cua day S = 1 + 1/2 + 1/3 + ... + 1/n voi S > a"<<"\n";
	
	int n;
	float s=0,i=1;
	
	cout << "\nNhap n =  ";
	cin >> n; 

	do{
		if(n <= 3){
 			cout << "Vui long nhap lai n.";
 		return n;
 	} 
		s = s + (1.0/i); 
		i++; 
	}
	while(i <= n); 
	cout << "Gia tri cua day S = 1+1/2 +1/3 + ... + 1/n "<< s <<endl; 
	cout << "So n nho nhat la :" << "4" <<endl;

return 0;
} 