#include<iostream.h>
using namespace std;
int main(){
	cout << "Xac dinh tam giac :\n";
	
	float a,b,c;
	
	cout<<"\n Nhap canh a: ";
	cin>>a;
	cout<<"\n Nhap canh b: ";
	cin>>b;
	cout<<"\n Nhap canh c: ";
	cin>>c;
	
		
	if(a<b+c&&b<a+c&&c<a+b){
		
		if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
			cout<<"Day la  tam giac vuong \n";
		}
		
		else if(a==b && b==c){
			cout<<"Day la tam giac deu \n";
		}
		
		else if(a==b || b==c || c==a){
			cout<<"Day la tam giac can \n";
		}
		
		else{
			cout<<"Day la tam giac thuong\n"<<endl;
			}
	}
	else{
		cout<<"\n Khong phai la tam giac"<<endl;
		}
	
	
	return 0;
}