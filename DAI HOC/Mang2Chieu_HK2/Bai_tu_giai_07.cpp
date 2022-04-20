//In so chinh phuong trong mang
//tim vi tri phan tu am dau tien
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#define	max	50
void 	input(int b[max][max], int, int);   //nhap mang
void 	output(int b[max][max], int, int);  //xuat mang
void 	in_socp(int b[max][max], int, int); 
//in so chinh phuong trong mang
void 	am_dau(int a[max][max], int, int);
//tim vi tri so am dau tien trong mang
int	 main()
{	int a[max][max], m, n;	
	cout<<"Nhap so hang m = ";cin>>m;
	cout<<"Nhap so cot n = ";cin>>n;	
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	in_socp(a,m,n);
	am_dau(a,m,n);
 	return 0;
} 
void	input(int  b[max][max],int m,int n)
{	cout<<"Nhap cac phan tu cua mang"<<endl;
	for (int i=0;i<m;i++)
  	{	for (int j=0;j<n;j++)
     	{	cout<<"b["<<i<<"]["<<j<<"]= ";
    		cin>>b[i][j];				     
 		}
 		cout<<endl;
  	}
} 
void	output(int  b[max][max],int m,int n)
{	for (int i=0;i<m;i++)
	{	for (int j=0;j<n;j++)
			cout<<setw(6)<<b[i][j];
		cout<<endl;				
  	}
}
void  in_socp(int  b[max][max],int m,int n)
{	int t;
	cout<<"Cac so chinh phuong trong mang la:"<<endl;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{	t = sqrt(b[i][j]);
			if( b[i][j] == t*t)						
				cout<<b[i][j]<<"\t";
		}
}
void  am_dau(int  b[max][max],int m,int n)
{		
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(b[i][j] < 0)
			{	cout<<"So am dau tien cua mang nam o hang ";
				cout<<i<<" cot "<<j<<endl;				
				break;
			}	
}


