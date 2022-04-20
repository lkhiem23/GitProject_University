#include<iostream.h>
#include<string.h>
int  main()
{	char s[50];
	cout<<"\nNhap xau chu thuong: ";
	cin.getline(s,50);
	cout<<"Xau chu hoa la: "<<strupr(s)<<endl;
	return 0;
}
