#include <iostream>
using namespace std;
long TongBinhPhuong(unsigned int x)
{
 	if (x<=1)
		return 1;
	else
 		return x*x + TongBinhPhuong(x-1);
}
int   main() 		
{	unsigned int 	 n; 
  	cout<<"Nhap n: ";	cin>>n;
	cout<<"Tong la: "<<TongBinhPhuong(n)<<endl;	
	return 0;
}
