#include <iostream.h>

using namespace std;

int main(){
	
	float a,b,c;
	float dtb;
	
	cout << "Nhap diem Toan : ";
	cin >> a;
	cout << "Nhap diem Ly : ";
	cin >> b;
	cout << "Nhap diem Hoa : ";
	cin >> c;
	
	dtb = (a+a+a+a+b+b+b+c+c) / 9.0;
	
	if(dtb < 0 || a < 0 || b < 0 || c < 0){
		cout << "So diem khong hop le. Vui long thu lai!\n";
	}
	
	else if(dtb >= 9){
			cout << "Dat xep loai Xuat sac!\n"<<endl;	
	}
	else if(8 <= dtb && dtb < 9){
			cout << "Dat xep loai Gioi!\n"<<endl;
		}
	else if(dtb >= 6.5 && dtb < 8){
		cout << "Dat xep loai Kha!\n"<<endl;
	}
	else if	(dtb >= 5 && dtb <6.5){
		cout << "Dat xep loai Trung binh!\n"<<endl;
	}
	else if (dtb < 5){
		cout << "Dat xep loai Yeu!\n"<<endl;
	}	

	
	return 0;
	}
		
	
	
	
	
	

	







