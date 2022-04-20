#include<iostream.h>
#include<string.h>
#include<iomanip.h>
using namespace std;

struct sanpham{

char masp[20];
char tensp[20];
int soluong;
float dongia;
float thanhtien;
	
};

void nhapsp(sanpham a[], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		cout << "Nhap MA SAN PHAM "<<i+1<<": "<<endl;
		cin.getline(a[i].masp,20);
		cout << "Nhap TEN SAN PHAM: ";
		cin.getline(a[i].tensp,20);
		cout << "Nhap SO LUONG SAN PHAM: ";
		cin>>a[i].soluong;
		cout << "Nhap DON GIA: ";
		cin >> a[i].dongia;
	}
}
void xuatsp(sanpham a[], int n){
	cout << "Danh sach san pham : "<<endl;
	cout << setw(10)<<"MA SAN PHAM: ";
	cout << setw(25)<<"TEN SAN PHAM: ";
	cout << setw(15)<<"SO LUONG SAN PHAM: ";
	cout << setw(15)<<"DON GIA: ";
	cout << setw(15)<<"THANH TIEN: ";
	cout <<endl;

	for (int i=0;i<n;i++)
{
	cout<<setw(15)<<a[i].masp;
	cout<<setw(20)<<a[i].tensp;
	cout<<setw(15)<<a[i].soluong;
	cout<<setw(15)<<a[i].dongia;
	cout<<setw(15)<<a[i].thanhtien<<endl;
}
}

void ThanhTien(sanpham a[], int n){
	for(int i=0; i<n; i++){
		a[i].thanhtien = a[i].soluong * a[i].dongia;
	}
}
void spduoi20000(sanpham a[],int n){
	cout << "Danh sach san pham duoi 20.000 la: "<<endl;
		cout << setw(15)<<"MA SAN PHAM: ";
		cout << setw(20)<<"TEN SAN PHAM: ";
		cout << setw(20)<<"SO LUONG SAN PHAM: ";
		cout << setw(20)<<"DON GIA: ";
		cout << setw(20)<<"THANH TIEN: ";
		cout <<endl;
	
	for(int i=0; i<n; i++){
		if(a[i].dongia <= 20000){
			cout<<setw(15)<<a[i].masp;
			cout<<setw(30)<<a[i].tensp;
			cout<<setw(15)<<a[i].soluong;
			cout<<setw(15)<<a[i].dongia;
			cout<<setw(15)<<a[i].thanhtien<<endl;
		}
	}	
}

int main(){
	int n;
	cout << "Nhap so san pham: ";
	cin >> n;
	
	sanpham sp[100];
	cin.ignore();
	cout << endl;
	
	nhapsp(sp,n);
	
	ThanhTien(sp,n);
	xuatsp(sp,n);

	spduoi20000(sp,n);	
	return 0;
	
}