#include<iostream.h>
#include<iomanip.h>
#define	max	50
void 	input(int b[max][max], int, int);   //nhap mang
void 	output(int b[max][max], int, int);  //xuat mang
void 	kiemtra(int b[max][max], int, int);
//kiem tra cua 

int	 main()
{	int a[max][max], m, n;	
	cout<<"Nhap so hang m = ";cin>>m;
	cout<<"Nhap so cot n = ";cin>>n;	
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	kiemtra(a,m,n);
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
void	 kiemtra(int  b[max][max],int m,int n)
{	bool kt = true;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if( b[i][j] % 2 == 0)						
				kt = false;
	if (kt) cout<<"Mang gom toan cac so le"<<endl;
	else	cout<<"Mang khong gom toan cac so le"<<endl;
}



