#include<iostream.h>
#include<string.h>
int main()
{ 
	char st[50],ch[50];
	int i, j, n;
	cout<<"\n Moi nhap 1 xau ho ten:"; cin.getline(st,50);
	cout<<"\n Xau ho ten vua nhap la:"<<st<<endl;
 	n = strlen(st)-1;
	// Chuan hoa cuoi xau
	while(st[n]==' ')
			st[n]='\0';
	// Chuan hoa dau xau
	while(st[0]==' ')
		for(i=0; i<=n; i++)
			st[i]=st[i+1];
	// Chuan hoa giua xau
    i=0;
	while(st[i]!='\0')
	{
	 	if(st[i]==' ')
			if(st[i-1]==' ')
	    	{
				for(j=i; j<=n; j++)
		  			st[j]=st[j+1];
  				i--;  
	   		}
 		i++;
	};
	cout<<"\n\t\t Xau chuan hoa la:"<<st<<endl;

}
