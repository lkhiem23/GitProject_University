#include <iostream>
#include <math.h>
using namespace std;
double  luythua(int x)
{
   if (x == 1) 
		return 1; 	
   else 
		return (float)pow(x,x)* luythua(x-1); 	
}
int  main()
{
	int 	 n; 	
   cout<<"Nhap n = "; cin>>n;
	cout<<"Ket qua: "<<luythua(n)<<endl;
	return 0;
}

