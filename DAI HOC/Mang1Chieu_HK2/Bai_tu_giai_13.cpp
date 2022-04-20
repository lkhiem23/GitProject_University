#include <iostream.h>
#include <iomanip.h>
void	input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
     }
}
void  search(int  b[],int m, int  x)
{	int dem = 0;
	for(int i=0;i<m;i++)
		if (b[i] == x) 
		{	dem++;
			cout<<i<<"\t";		
		}
	if(dem==0)   
		cout<<x<<" khong co trong mang"<<endl;        
} 
int	 main()
{	
	int a[100], n, x;
	cout<<"Nhap so phan tu mang: "; cin>>n;	
	input(a,n);
	cout<<"Nhap gia tri can tim: "<<endl; cin>>x;
	search(a,n,x);
	return 0;
} 

