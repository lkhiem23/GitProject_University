#include <iostream.h>
#include <math.h>
using namespace std;

int main(){
	
	float a,b,c;
	float p,s;
	cout << "Nhap canh a:";
	cin >> a; 
	cout << "Nhap canh b:";
	cin >> b;
	cout << "Nhap canh c:";
	cin >> c; 
	
	
	p = (a + b + c) / 2.0; // nua chu vi
	s = sqrt(p*(p-a)*(p-b)*(p-c));

	
	if(a >= b+c || b >= a+c || c >= a+b)
		cout << "Ba canh vua nhap khong phai la cac canh cua tam giac";
	else{
		cout << "Dien tich cua tam giac la : " << s << endl;
	}
	
	
	return 0;
		
}