#include<iostream.h>
#include<string.h>
int  main()
{	char s[50], ch;
	int  n;	
	bool	k = false;
	cout<<"\nNhap xau ky tu: "; cin.getline(s,50);
	cout<<"\nNhap ky tu can tim: ";cin>>ch;
	n=strlen(s);
   	for(int i=0;i<n;i++)
		if(s[i]==ch)
			k = true;
	if(k)  
	   	cout<<"\tKy tu "<<ch<<" co trong xau"<<endl;
	else
       	cout<<"\tKy tu "<<ch<<" ko co trong xau"<<endl;
	return 0;
}
