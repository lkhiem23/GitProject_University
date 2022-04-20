//In ra cac so trong doan [10,100]
//Sap xep dong dau tien cua mang tang dan
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#define	max	50
void 	input(float b[max][max], int, int);   //nhap mang
void 	output(float b[max][max], int, int);  //xuat mang
void 	in_ptu(float b[max][max], int, int); 
//in phan tu trong doan [10,100]
void 	sap_xep(float a[max][max], int, int);
//sap xep dong dau tien cua mang tang dan
int	 main()
{	float a[max][max];
	int m, n;	
	cout<<"Nhap so hang m = ";cin>>m;
	cout<<"Nhap so cot n = ";cin>>n;	
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	in_ptu(a,m,n);
	sap_xep(a,m,n);
	cout<<"\nMang sau khi sap xep la "<<endl;
	output(a,m,n);
 	return 0;
} 
void	input(float  b[max][max],int m,int n)
{	cout<<"Nhap cac phan tu cua mang"<<endl;
	for (int i=0;i<m;i++)
  	{	for (int j=0;j<n;j++)
     	{	cout<<"b["<<i<<"]["<<j<<"]= ";
    		cin>>b[i][j];				     
 		}
 		cout<<endl;
  	}
} 
void	output(float  b[max][max],int m,int n)
{	for (int i=0;i<m;i++)
	{	for (int j=0;j<n;j++)
			cout<<setw(6)<<b[i][j];
		cout<<endl;				
  	}
}
void  in_ptu(float  b[max][max],int m,int n)
{	
	cout<<"Cac phan tu nam trong doan tu 10 den 100 la:"<<endl;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)	
			if((b[i][j] >=10)&&(b[i][j] <=100))						
				cout<<b[i][j]<<"\t";			
}
void  sap_xep(float  b[max][max],int m,int n)
{		
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			for(int t = j+1;t<n;t++)
				if(b[i][j] > b[i][t]&&i==0)
				{	float tg = b[i][j];
					b[i][j] = b[i][t];
					b[i][t] = tg;
				}	
}


