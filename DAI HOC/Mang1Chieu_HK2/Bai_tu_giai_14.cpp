#include <iostream.h>
#include <iomanip.h>
void	input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
     }
} 
bool  KTSHH(int x)
{	int tong = 0; 
	for(int i=1;i<x;i++)
		if (x%i==0) 
			tong += i;
	if(tong ==x)		
		return true;		
	return 	false;         
} 
int	 main()
{ 
	int a[100], n;
  	cout<<"Nhap so phan tu mang: "; cin>>n;	
  	input(a,n);
  	cout<<"Cac so hoan hao trong mang la:"<<endl;
  	for (int i=0;i<n;i++)
		if (KTSHH(a[i]))
			cout<<setw(6)<<a[i];
  	cout<<endl;
  	return 0;
} 
