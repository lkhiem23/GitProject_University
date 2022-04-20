#include <iostream.h>
int  main()
{
	int 	a[100];  		// Khai bao mang
	int 	i,n;
	// Nhap gia tri mang
	cout << "Nhap so phan tu cua mang: ";   cin >> n;
	for (i=0;i<n;i++)
	{
        cout<<"a["<<i<<"]=";
        cin>>a[i];
	}     
	// Hien thi gia tri mang
	cout << "Hien thi gia tri cua mang \n";
	for (i=0; i<n; i++)
        cout << a[i]<< ';'<< " ";
	cout<<endl;
	return 0;
}
