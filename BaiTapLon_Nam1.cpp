#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

struct dienthoai{
	char mamb[30];
	char tenmb[30];
	float dongia;
	int soluong;
	int chatluong;
	float thueVAT;
	float tongtien;	
	int them;
};

void nhapmb(dienthoai a[], int n){
	for(int i=0; i<n; i++){
		cin.ignore();
		cout << "Nhap Ma Mobile: ";
		cin.getline(a[i].mamb,30);
		cout << "Nhap Ten Mobile: ";
		cin.getline(a[i].tenmb,30);
		cout << "Nhap don gia: ";
		do
		{
			cin >> a[i].dongia;

			if (a[i].dongia < 0)
			{
				cout << "Vui long nhap lai don gia: ";
			}
		} while (a[i].dongia < 0);
		cout << "Nhap So Luong: ";

		do
		{
			cin >> a[i].soluong;

			if (a[i].soluong < 0)
			{
				cout << "Vui long nhap lai so luong: ";
			}
		} while (a[i].soluong < 0);
		cout << "Nhap chat luong(1 or 2) ";

		do
		{
			cin >> a[i].chatluong;

			if (a[i].chatluong < 1 || a[i].chatluong >2)
			{
				cout << "Vui long nhap lai chat luong: ";
			}
		} while (a[i].chatluong < 1 || a[i].chatluong > 2);
		cout << endl;
	}
}
int tinhVAT(dienthoai a[], int n){
	for(int i=0; i<n; i++){
		if(a[i].chatluong == 1){
			a[i].thueVAT = a[i].dongia * a[i].soluong * 0.3; 
		}
		if(a[i].chatluong == 2){
			a[i].thueVAT = a[i].dongia * a[i].soluong * 0.1; 
		}
	}
return 0;	
}

void dongke()
{
	cout << "+---------------------------------------------------------------------------------------------------------------+\n";
	cout << "|";
	cout << setw(15) << "Ma Mobile" << "|";
	cout << setw(15) << "Ten Mobile" << "|";
	cout << setw(15) << "Don Gia" << "|";
	cout << setw(15) << "So Luong" << "|";
	cout << setw(15) << "Chat Luong" << "|";
	cout << setw(15) << "Thue VAT" << "|";
	cout << setw(15) << "Tong Tien" << "|"<<endl;
	cout << "+---------------------------------------------------------------------------------------------------------------+\n";
}	

void xuat1Mobile(dienthoai a)
{
	cout << "|";
	cout << setw(15) << a.mamb << "|";
	cout << setw(15) << a.tenmb << "|";
	cout << setw(15) << a.dongia << "|";
	cout << setw(15) << a.soluong << "|";
	cout << setw(15) << a.chatluong << "|";
	cout << setw(15) << a.thueVAT << "|";
	cout << setw(15) << a.tongtien << "|"<<endl;
}

int TongTien(dienthoai a[], int n){
	for(int i=0; i<n; i++){
		a[i].tongtien = (a[i].dongia * a[i].soluong) + a[i].thueVAT;
	}
	return 0;
}

void xuatmb(dienthoai a[], int n){
	cout << "\nDanh sach MOBILE la : "<<endl;
	dongke();
		
	for (int i=0;i<n;i++)
{
	xuat1Mobile(a[i]);
}
}

void xuatcl2(dienthoai a[],int n){
	
	cout << "\nDanh sach MOBILE loai 2 la : "<<endl;
	dongke();
	
	for(int i=0;i<n;i++){
		if(a[i].chatluong == 2){
			xuat1Mobile(a[i]);
		}
	}
}
void sapxep(dienthoai a[],int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i].thueVAT < a[j].thueVAT){
				dienthoai tg = a[i];
				a[i]= a[j];
				a[j] = tg;
			}
		}
	}
}

void themmb(dienthoai a[],int &n){
	n++;
    dienthoai b[1];
	nhapmb(b,1);
    tinhVAT(b,1);
    TongTien(b,1);
    a[n-1]=b[0];
	sapxep(a,n);
}

void xoamb(dienthoai a[], int &n,int x){
	for(int i = x; i<n; i++){
		a[i] = a[i+1];
	}
	n--;
}

void xoaVAT(dienthoai a[], int &n){
	float b;
	cout << "\nNhap vat: ";
	cin >> b;
	for(int i=0; i<n; i++){
		if(a[i].thueVAT > b){
			xoamb(a,n,i);
            i--;
		}
	}
}


void ghitep(dienthoai a[], int n){
	ofstream f;
	f.open("mobile.dat", ios::out);
	if(!f){
		cout << "Khong co tep nay.";
		exit(1);
	}
	for (int i=0;i<n;i++){
		f << setw(15) << a[i].mamb;
		f << setw(15) << a[i].tenmb;
		f << setw(15) << a[i].dongia;
		f << setw(15) << a[i].soluong;
		f << setw(15) << a[i].chatluong;
		f << setw(15) << a[i].thueVAT;
		f << setw(15) << a[i].tongtien;
		f << endl;
}
f.close();
}

void DocDsMB(dienthoai a[], int n){
	ifstream f;
	f.open("mobile.dat", ios::in);
	for (int i=0;i<n;i++){
		f >> a[i].mamb;
		f >> a[i].tenmb;
		f >> a[i].dongia;
		f >> a[i].soluong;
		f >> a[i].chatluong;
		f >> a[i].thueVAT;
		f >> a[i].tongtien;
}
f.close();
}


void menu(dienthoai a[], int n){
	int b;
	cout<<"________________________LUA CHON 1 TRONG NHUNG OPTION DUOI________________________\n\n";
	cout << "1. NHAP DANH SACH CAC THIET BI TU BAN PHIM: "<<endl;
	cout << "2. TINH THUE VAT: "<<endl;
	cout << "3. IN DANH SACH THIET BI DUOI DANG BANG: "<<endl;
	cout << "4. IN DANH SACH CAC THIET BI CO CHAT LUONG LOAI 2: "<<endl;
	cout << "5. SAP XEP THUE VAT GIAM DAN: "<<endl;
	cout << "6. THEM VAO DANH SACH MOT THIET BI: "<<endl;
	cout << "7. XOA KHOI DANH SACH CAC THIET BI CO VAT > vat: "<<endl;
	cout << "8. LUU DANH SACH RA TEP: mobile.dat "<<endl;
	cout << "9. DOC DANH SACH TU TEP: mobile.dat VA XUAT RA MAN HINH: "<<endl;
	cout << "\n";
	
	cout << "Ban chon: ";
	cin >> b;
	
	switch(b){
		
		case 1:
		cout << "\nNhap danh sach thiet bi MOBILE: \n\n"; 
		nhapmb(a,n);
		break;
		
		case 2:
		cout << "\nTinh thue VAT va Tong Tien: "<<endl;
	 	tinhVAT(a,n);
		TongTien(a,n);
		cout << "Da tinh xong, ban co the in danh sach.\n"<<endl;
		break;
		
		case 3: 
		
		xuatmb(a,n);
		cout << "+---------------------------------------------------------------------------------------------------------------+\n";
		break;
		
		case 4: 
		xuatcl2(a,n);
		cout << "+---------------------------------------------------------------------------------------------------------------+\n";
		break;
		
		case 5: 
		cout << "\nSap xep thue VAT theo thu tu giam dan: "<<endl;
		sapxep(a,n);
		cout << "Da sap xep xong, Nhap 3 de in ra danh sach vua sap xep.\n"<<endl;
		break;
		
		case 6: 
		themmb(a,n);
		break;
		
		case 7: 
		xoaVAT(a,n);
		cout << "Xoa thanh cong, ban co the in danh sach moi.\n"<<endl;
		break;
		
		case 8:
	 	cout << "\nLuu danh sach MOBILE ra tep mobile.dat" <<endl;
	 	ghitep(a,n);
		cout << "Ghi tep thanh cong.\n"<<endl;
		break;
		
		case 9: 
		DocDsMB(a,n);
		xuatmb(a,n);
		cout << "+---------------------------------------------------------------------------------------------------------------+\n";
		break; 
		
	}
	cout << "\nTIEP TUC LUA CHON: "<<endl;
	cout << "1. Co"<<endl;
	cout << "2. Khong"<<endl;
	for(int i=0;i<n;i++){
		do
		{
			cin >> a[i].them;

			if (a[i].them < 1 || a[i].them >2)
			{
				cout << "Vui long nhap lai: ";
			}
		} while (a[i].them < 1 || a[i].them > 2);
		
		if(a[i].them == 1){
			menu(a,n);
		}else if(a[i].them == 2){
			break;
		}
	}
}

int main(){
	int n;
	cout<<"______________________________NHAP SO THIET BI______________________________\n";

	do{
		cin >> n;
		if(n < 1){
			cout << " Vui long nhap it nhat 1 san pham.";
		}
	}while( n < 1);
	
	dienthoai mb[100];
	cin.ignore();
	cout << endl;
	menu(mb,n);
	return 0;
}