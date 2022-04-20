#include <iostream>
#include <math.h> 	
using namespace std;	
long  x(int  n)
{
      if (n == 0)
        		return 1;
      long  s = 0;
      for (int i=1; i<=n; i++)
           	s = s + pow(i,2)*x(n-i);
      return  s;
}
int   main() 		
{	int 	 n; 
	float xn;
  	cout<<"Nhap n: ";	cin>>n;
	cout<<"xn= "<<x(n)<<endl;	
	return 0;
}
