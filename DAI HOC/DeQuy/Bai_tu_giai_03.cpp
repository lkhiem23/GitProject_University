#include <iostream>
using namespace std;
int    giai_thua(int    x)
	{	
		if (x==0)
			return  1;
		else
			return  giai_thua(x-1)*x;
		
	}
int   main() 		
{	
	unsigned int 	 n, k; 
	float C;	
 	cout<<"Nhap n: ";	cin>>n;
	cout<<"Nhap k: ";	cin>>k;	
	C = giai_thua(n)/(giai_thua(k)*giai_thua(n-k));
	cout<<"To hop chap "<<k<<" cua "<<n<< " la " <<C<<endl;	
	return 0;
}
