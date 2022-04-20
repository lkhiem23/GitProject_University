#include <iostream.h>
#include <iomanip.h>
int main()
{	int a[100], n, i;
	cout << "Nhap so phan tu cua mang: ";    
	cin >> n;
	//Nhap mang
	for (i=0;i<n;i++)
	{
   		cout<<"a["<<i<<"] = ";
     	cin>>a[i];
	}
	//Xuat mang
	cout<<"Mang da nhap la: "<<endl;
	cout<<setw(20)<<"Chi so"<<setw(20)<<"Gia tri"<<endl;
	for (i=0; i<n; i++)
     	cout<<setw(20)<<i<<setw(20)<<a[i]<<endl;
	cout<<endl;
}