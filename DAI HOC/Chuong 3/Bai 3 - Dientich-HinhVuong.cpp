#include <iostream.h>

using namespace std;

int main(){
	
	int a,b;
	int s; // s la dien tich hinh vuong
	int p; // p la chu vi hinh vuong
	
	cout << "Nhap canh a ="; // a la chieu dai cac canh hinh vuong
	cin >> a;
	
	s = a*a; // Cong thuc dien tich hinh vuong
	p = a*4; // Cong thuc chu vi hinh vuong
	
	if(a > 0){
			
	cout << "Chu vi hinh vuong la :" << p <<endl;
	cout << "Dien tich hinh vuong la :" << s <<endl;
		
	}
	
	else{
	
	cout << "Vui long nhap so duong!" <<endl;
	}
	
	return 0;

}