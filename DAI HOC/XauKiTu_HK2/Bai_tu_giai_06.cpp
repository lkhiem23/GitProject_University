#include<iostream.h>
#include<string.h>
int  main()
{	char s1[50], s2[50];
	cout<<"\nNhap xau 1:";cin.getline(s1,50);
	cout<<"\nNhap xau 2:";cin.getline(s2,50);
	if (strcmp(s1, s2)== 0)
 		cout<<"\nHai xau giong nhau"<<endl;
 	else
 		if (strcmp(s1, s2) == 1)
 		   	cout<<"\nXau 1 lon hon xau 2"<<endl;
 		else
 			cout<<"\nXau 2 lon hon xau 1"<<endl;
}
