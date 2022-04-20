#include<iostream.h>
#include<iomanip.h>
#define	max	50
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

int	 main()
{	int a[max][max], b[max][max], c[max][max];
	int m, n, p, q, i, j, k;	
	cout<<"Nhap so hang, so cot cua ma tran thu nhat ";cin>>m>>n;
	cout<<"Nhap so hang, so cot cua ma tran thu nhat ";cin>>p>>q;	
	
	if (p==n)
	{	input(a,m,n);
		input(b,p,q);
		for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
            	c[i][j]=0;
                for(k=0;k<n;++k)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                cout<<c[i][j]<<"\t";
             }
             cout<<endl;
        }
  	}
  	else
  		cout<<"Khong thuc hien duoc phep nhan"<<endl;
	
 	return 0;
} 





