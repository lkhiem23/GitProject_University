//trung binh cong cac phan tu le cua mang
//dem so luong so nguyen to trong mang
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#define	max	50
void 	input(int b[max][max], int, int);   //nhap mang
void 	output(int b[max][max], int, int);  //xuat mang
void 	tbc(int b[max][max], int, int);
//tinh trung binh cong cac phan tu le cua mang
void 	dem_snt(int a[max][max], int, int);
//dem so luong cac so nguyen to tren mang
int	 main()
{	int a[max][max], m, n;	
	cout<<"Nhap so hang m = ";cin>>m;
	cout<<"Nhap so cot n = ";cin>>n;	
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	tbc(a,m,n);
	dem_snt(a,m,n);
 	return 0;
} 
void	input(int  b[max][max],int m,int n)
{	for (int i=0;i<m;i++)
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
void	 tbc(int  b[max][max],int m,int n)
{	int tong = 0, dem = 0;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if( b[i][j] % 2 != 0)						
			{	tong += b[i][j];
				dem++;
			}
	cout<<"\nTrung binh cong cac phan tu le cua mang: "<<tong/dem<<endl;
}
void	 dem_snt(int  b[max][max],int m,int n)
{	int  dem = 0;	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{	int d = 0;	//dem so uoc cua b[i][j]
			for(int t = 1; t<=b[i][j];t++)
				if (b[i][j]%t==0)
					d++;
			if (d==2)											
				dem++;				
		}
	cout<<"So cac so nguyen to trong mang la "<<dem<<endl;	
}


