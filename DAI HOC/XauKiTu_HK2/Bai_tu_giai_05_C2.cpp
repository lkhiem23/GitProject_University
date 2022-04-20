#include<iostream.h>
#include<string.h>
int  main()
{	char s[50];
	int  n;
	cout<<"\nNhap xau chu thuong: ";
	cin.getline(s,50);
	n=strlen(s);
   	for(int i=0;i<n;i++)
		if(s[i]>=97 && s[i]<=122)
			s[i] =s[i] - 32;
	cout<<"\n\tXau chu hoa la: \t"<<s<<endl;
	return 0;
 }
