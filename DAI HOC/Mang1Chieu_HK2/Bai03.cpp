#include<iostream.h>
void nhap(int a[],int n)
{
	for(int i=0; i<n ;i++)
	{
		cout<<"a["<<i<<"]= "; 
		cin>>a[i];
	}
		
}
void search(int a[], int n)
{
	int min =a[0];
	int vt=0;
	for(int i=1;i<n;i++)	
		if(min>a[i])
		{
			min=a[i];
			vt=i;
		}	
	cout<<"Phan tu nho nhat o vi tri "<<vt<<" gia tri la "<<min<<endl;
}

int main()
{
	int n; 
	cout<<" Nhap so phan tu cua mang: "; cin>>n;
	int a[n];
	nhap(a,n);
	search(a,n);
	return 0;
}