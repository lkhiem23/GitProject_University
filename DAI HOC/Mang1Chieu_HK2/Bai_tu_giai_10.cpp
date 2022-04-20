#include <iostream.h>
#include <iomanip.h>
void	input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {	
	 	cout<<"b["<<i<<"]="; 
	 	cin>>b[i];
     }
}
void  output(int  b[], int m)
{	for(int i=0;i<=m;i++)						 
		cout<<b[i]<<"\t";
} 
void	 sapxep(int  b[],int m)
{		
	for (int i=0; i<m-1;i++)
    		for (int j=i+1; j<m; j++)
        		if (b[i]>b[j])
            	{
            		int tg=b[i];
 				b[i]=b[j]; 		
				b[j]=tg;
            	} //Doi cho
} 
void	insert(int a[], int n, int x) 
{
	int pos = n;
	while ((pos>0) && (a[pos-1]>x)) 
	{	a[pos] = a[pos - 1];
		pos --;
	}
	a[pos] = x;
}
int	main()
{	int a[100], n, x;
	cout<<"Nhap so phan tu mang n = "; cin>>n;
 	input(a,n);
 	sapxep(a,n);
 	cout<<"\nDay da sap xep la: "<<endl;
 	output(a,n-1);
 	cout<<"\nNhap phan tu can them: "; cin>>x;
	insert(a,n,x);
	output(a,n);
	cout<<endl;
	return 0;
} 
