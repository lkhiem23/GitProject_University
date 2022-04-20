#include <iostream.h>
#include <string.h> 
void tan_suat(char a[])	
{	int n = strlen(a);
	for(int i=0;i<n;i++)
	{	int kt = 1;		
		for(int j=i-1;j>0;j--)
			if(a[i]==a[j])
			{	kt = 0;	
				break;
			}
		if (kt == 1)
		{	int dem = 0;
			
			for(int k = 0;k<n; k++)
				if	(a[i]==a[k])
					dem++;
			cout<<"Ky tu "<<a[i]<<" xuat hien "<<dem<<" lan"<<endl;
			
		}
	}	//end for i
}		//end void
int main()
{	
	char s[50];
	cout<<"Nhap vao mot xau: "; gets(s);
	tan_suat(s);
	return 0;
}