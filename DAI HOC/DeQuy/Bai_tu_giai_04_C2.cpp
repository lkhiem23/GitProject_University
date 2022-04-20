#include <iostream>	//Cach 2
using namespace std;
int    UCLN(int    m, int n)
{	if (n == 0)
		return  m;
	else
		return UCLN(n, m%n);		
}
int   main() 		
{	int 	 a, b, c; 	
     	cout<<"Nhap a: ";	cin>>a;
	cout<<"Nhap b: ";	cin>>b;
	cout<<"Nhap c: ";	cin>>c;
	cout<<"UCLN = "<<UCLN(UCLN(a,b),c)<<endl;	
	return 0;
}
