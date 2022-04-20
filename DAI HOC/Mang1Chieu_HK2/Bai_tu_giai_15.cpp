#include <iostream.h>
#include <iomanip.h>
void	input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
     }
} 
bool  KTSNT(int x)
{	int count = 0; 
	for(int i=1;i<=x;i++)
		if (x%i==0) 
			count++;
	if(count==2)		return true;		
	return  false;         
} 
int	main()
{ int a[100], n;
  cout<<"Nhap so phan tu mang: "; cin>>n;	
  input(a,n);
 cout<<"Cac so nguyen to trong mang la:”<<endl;
  for (int i=0;i<n;i++)
	 	if (KTSNT(a[i]))
			cout<<setw(6)<<a[i];
  cout<<endl;
  return 0;
} 
