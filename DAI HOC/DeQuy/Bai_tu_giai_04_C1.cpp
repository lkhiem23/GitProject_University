#include <iostream>
using namespace std; 	//Cach 1
	int    UCLN(int    m, int n)
	{	
		if (m == n)
			return  m;
		else
			if (m>n)
				return UCLN(m-n,n);
			else
				return UCLN(m,n-m);		
	}
int   main() 		
{	int 	 a, b, c; 
	
  	cout<<"Nhap a = ";	cin>>a;
	cout<<"Nhap b = ";	cin>>b;
	cout<<"Nhap c = ";	cin>>c;
	cout<<"UCLN = "<<UCLN(UCLN(a,b), c)<<endl;
	return 0;
}
