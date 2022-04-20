#include <iostream.h>

using namespace std;
int main(){	
	
	int a,b,c;
	int max;
	int min;
	
	cout << "Tim so lon nhat va so nho nhat trong ba so : \n";
	
	cout << "\nNhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap c = ";
	cin >> c;


	max = a;
	min = a;
	
if (a==b && b==c && c==a){
	cout<<"\nKhong co gia tri max va min.\n"<<endl;		

}else{
	
	if (max < b)
		max = b;
	
	if (max < c)
		max = c;

cout << "So lon nhat trong ba so la : \n" << max << endl;

	if (min > b)
		min = b;
	if (min > c)
		min = c;
		
cout << "So nho nhat trong ba so la : \n" << min << endl; 
	}

	

}