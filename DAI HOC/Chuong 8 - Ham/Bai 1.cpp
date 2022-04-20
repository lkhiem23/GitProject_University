#include<iostream.h>
using namespace std;

int haiso(int a,int b){
	int max = a;
	if (max < b){
		max = b; 
	} 
	return max; 
}  

int main(){
	int a,b,c,d;
	int max1,max2; 
	
	cout<<"Nhap a,b:\n";
	cin >> a >> b;
	cout <<"So lon nhat la : " << haiso(a,b) << "\n";
	cout<<"Nhap c,d :\n";
	cin >> c >> d;
	
	max1=haiso(a,b);
	max2=haiso(c,d);
	
	cout <<"\nSo lon nhat trong bon so la: "; 
	cout << haiso(max1,max2) << "\n"; 
	
	return 0; 
	 
} 