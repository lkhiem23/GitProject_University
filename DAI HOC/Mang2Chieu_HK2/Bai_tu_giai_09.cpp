//Tim cac so hoan hao tren duong cheo cua ma tran vuong
//Tim so lon nhat tren duong cheo chinh
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#define	max	50
void 	input(float b[max][max], int);   //nhap mang
void 	output(float b[max][max], int);  //xuat mang
void 	so_hoan_hao(float b[max][max], int); 
//in phan tu trong doan [10,100]
void 	so_lon_nhat(float a[max][max], int);
//sap xep dong dau tien cua mang tang dan
//ham kiem tra mot so co la so hoan hao khong
bool    KTSHH(int    x)
{	int tong = 0;		//tong la bien cuc bo
	for (int i=1; i<x; i++)
		if (x%i == 0)
			tong +=i;
	if (tong==x)
		return  true;
	return    false;
}
int	 main()
{	float a[max][max];
	int m, n;	
	cout<<"Nhap cap cua ma tran n = ";cin>>n;	
	input(a,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,n);
	so_hoan_hao(a,n);
	so_lon_nhat(a,n);
 	return 0;
} 
void	input(float  b[max][max],int n)
{	cout<<"Nhap cac phan tu cua mang"<<endl;
	for (int i=0;i<n;i++)
  	{	for (int j=0;j<n;j++)
     	{	cout<<"b["<<i<<"]["<<j<<"]= ";
    		cin>>b[i][j];				     
 		}
 		cout<<endl;
  	}
} 
void	output(float  b[max][max],int n)
{	for (int i=0;i<n;i++)
	{	for (int j=0;j<n;j++)
			cout<<setw(6)<<b[i][j];
		cout<<endl;				
  	}
}
void  so_hoan_hao(float  b[max][max],int n)
{	
	cout<<"Cac so hoan hao tren duong cheo chinh la:"<<endl;
	for (int i=0;i<n;i++)	
		if(KTSHH(b[i][i]))						
			cout<<b[i][i]<<"\t";			
}
void  so_lon_nhat(float  b[max][max], int n)
{	float  so_lon = b[0][0];
	for(int i=1;i<n;i++)
		if(b[i][i] > so_lon)
			so_lon = b[i][i];
	cout<<"\nSo lon nhat tren duong cheo chinh la: "<<so_lon<<endl;
			
}


