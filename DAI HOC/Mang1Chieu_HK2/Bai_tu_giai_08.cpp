#include <iostream.h>
#include <iomanip.h>
void	input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {	cout<<"b["<<i<<"]="; cin>>b[i];
     }
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
int	main()
{	int a[100], n;
	cout<<"Nhap so phan tu mang n = "; cin>>n;
 	input(a,n);
 	sapxep(a,n);
 	cout<<"Cac pt khac nhau cua mang la:"<<endl;
	for (int i = 0; i<n; i++)
		if(a[i] != a[i+1])
			cout<<a[i]<<"\t";
	cout<<endl;
	return 0;
} 

