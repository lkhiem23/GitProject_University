#include <iostream.h>
using namespace std;

int main(){
	cout << "Tinh so tien dien : \n \n";
	
	int a; //So tieu thu dinh muc.
	int u; //Trong dinh muc. (1 < a < 80)
	int v; //Ngoai dinh muc. (a > 80)
	
	
	cout << "Nhap so kW da dung : ";
	cin >> a;
	
	u = a*350;
	v = a*900;
	
	if(a < 0){
		cout << "\nSo kW khong the am. Vui long thu lai!\n\n";
	}
	
	else{
		if(a < 80){
		cout << "\nSo tien dien phai tra la : " << u <<"\n"<<endl;
	}
		else{
		cout << "\nSo tien dien phai tra la : " << v << "\n"<<endl;
	
		}
		
	}
	
	
	
	
	
	return 0;
}