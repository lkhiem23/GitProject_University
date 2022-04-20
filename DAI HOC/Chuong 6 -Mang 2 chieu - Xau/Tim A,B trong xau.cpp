#include<iostream.h>
#include<string.h>
using namespace std;

int main()
{	char a[1000];
	int n; 
	int dem = 0;
	cout << "Nhap vao mot xau: ";
	cin.getline(a,1000);
	n = strlen(a);
	cout<< "Xau vua nhap la: "<< a << endl;   	
	
	for(int i=0; i<=n; i++){
  	if((a[i])=='A' || (a[i])=='B' || (a[i])=='a'|| (a[i])=='b')
 		dem++;
	}
 	cout<<"So ky tu A,a,B,b trong xau la:"<<dem<<endl;
	return 0;
}
