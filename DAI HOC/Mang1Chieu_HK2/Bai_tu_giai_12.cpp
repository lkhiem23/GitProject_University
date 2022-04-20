#include <iostream.h>
#include <iomanip.h>
void		input(int  b[],int m)
{	for (int i=0;i<m;i++)
     {
        cout<<“b["<<i<<"]=";
        cin>>b[i];
     }
} 
void		output(int  b[],int m)
{	for (int i=0;i<m;i++)
		cout<<setw(6)<<b[i];
}
void	 sapxep(int  b[],int m)
{		
	for (int i=0; i<m-1;i++)
    		for (int j=i+1; j<m; j++)
        		if (b[i]<b[j])
            	{
            		int tg=b[i];
 				b[i]=b[j]; 		
				b[j]=tg;
            	} //Doi cho
} 
void	main()
{	int a[100], n;
	cout<<"Nhap so phan tu mang n = "; 
	cin>>n;	
	input(a,n);
	cout<<"Mang truoc khi sap xep la:"<<endl;
 	output(a,n);
	sapxep(a,n);
	cout<<"Mang sau khi sap xep la:"<<endl;
 	output(a,n);
} 
