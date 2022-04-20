#include<iostream>

using namespace std;

int main(){
	int a[100];
	int n, k;
	cout << "Nhap so Phan tu mang n = ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin >> a[i];
	}// luu gia tri mang ban dau
	cout<<"Nhap vao chi so k can xoa ";
	cin >> k;//luu chi so can xoa
	for (int i = k; i < n; i++){
		a[i] = a[i+1]; //gia tri cua phan tu thu i = i+1 tinh tu chi so k 
        // xoa thanh cong
	}
	n--;//xoa gia tri thua cuoi cung
	for (int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}// in ra mang sau khi xoa
	cout<<endl;
	return 0;
}