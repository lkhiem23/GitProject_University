#include <iostream.h>
#include <iomanip.h>
void nhapmang(int b[], int m)
{
	for(int i = 0; i<m; i++)
	{	cout<<"b["<<i<<"]= ";
		cin>>b[i];
	}
}
void xuatmang(int b[], int m)
{	for (i=0;i<m;i++)
		cout<<b[i]<<"\t";
}
int main()
{	int a[100], n, i;
	long S = 0;			//khai bao va khoi tao bien tong
	cout << "Nhap so phan tu cua mang: ";    
	cin >> n;
	nhapmang(a,n);
	cout<<"Mang da nhap la: "<<endl;
	xuatmang(a,n);
	//tinh tong cac so le
	for (i=0;i<n;i++)
		if (a[i]%2 != 0) 
			S += a[i];
	cout<<"\nTong cac so le trong mang la: "<<S<<endl;
	return 0;
}