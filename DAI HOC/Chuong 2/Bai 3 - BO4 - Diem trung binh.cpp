#include <iostream.h>
using namespace std;

int main(){
	
	float a, b, c;
	float tbmon;
	
	
	cout << "Tinh diem trung binh cua ban :\n";
	
	cout << "Nhap diem Toan : ";
	cin >> a;
	cout << "Nhap diem Ly : ";
	cin >> b;
	cout << "Nhap diem Hoa : ";
	cin >> c;
	
	tbmon = ((a+a+a+a)+(b+b+b)+(c+c)) / 9.0 ;
	
	cout << "Diem trung binh cua ban la : " << tbmon << endl;
	
	return 0;
		
}