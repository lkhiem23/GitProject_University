#include <iostream>
#include <iomanip>

using namespace std;

void input (int a[], int n){
	for (int i = 0; i < n; i++){
		cout<<"\ta["<<i<<"] = ";cin>>a[i];
	}
}

void output (int a[], int n){
	for (int i = 0; i < n; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

void dem (int a[], int n){
	int dem = 0, dem1 = 0, dem2 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == 0)
			dem2++;
		else if (a[i] > 0)
			dem1++;
		else 
			dem++;
	}
	cout<<"Co "<<dem<<" phan tu am trong mang"<<endl;
	cout<<"Co "<<dem1<<" phan tu duong trong mang"<<endl;
	cout<<"Co "<<dem2<<" phan tu bang khong trong mang"<<endl;
}

int main(){
	int n;
	int a[n];
	cout<<"Nhap so luong phan tu: ";cin>>n;
	input(a, n);
	cout<<"Mang da nha la: ";
	output(a, n);
	dem(a, n);
	return 0;
}
