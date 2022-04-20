#include <iostream.h>
#include <iomanip.h>
void		input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {	cout<<"b["<<i<<"]="; 
	 	cin>>b[i];
     }
} 
void  tinh_TBC(int  b[], int m)
{	int  S=0;
 	for(int i=0;i<m;i++)		S = S + b[i];
	cout<<"\nTong la: " <<S<<endl;
	cout<<"\nTBC la: " <<(float)S/m<<endl; 
}
int	main()
{	int a[100], n;
	cout<<"Nhap so phan tu mang n = "; 
	cin>>n;	
	input(a,n);
	tinh_TBC(a,n);
	return 0;
} 
