#include <iostream>
using namespace std;
int main ()
{
int chisotruoc,chisosau,sodien,tiendien;

	cout << "Nhap chi so dien thang truoc va thang sau: \n";
	cin >> chisotruoc;
	cin >> chisosau;

	sodien = chisosau - chisotruoc;
	
	if (sodien<50) cout << "Tien dien thang nay la: " << sodien*230 << "dong \n";
		else	
	if (sodien<=50) cout << "Tien dien thang nay la: " << 50*230+(sodien-50)*480 << "dong \n";
		else
	if (sodien>50 && sodien<100) cout << "Tien dien thang nay la: " << 50*(230+480)+(sodien)*700 << "dong \n";
		else
	if (sodien<=100) cout << "Tien dien thang nay la: " << 50*(230+480+700)+(sodien-100)*900 << "dong \n";

system("pause");
return 1;
}