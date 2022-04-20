#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
	char a[100];
	int n;
	cout << "Nhap 1 xau: ";
	cin.getline(a,100);
    n = strlen(a);
	cout << "Xau vua nhap la: ";
 	cout << a <<endl;
	cout << "Xau dao nguoc la: ";
	for(int i = n-1; i>= 0; i--){
	cout << a[i];
 	}
	cout << endl;
	return 0;
}