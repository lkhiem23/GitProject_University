#include <iostream.h>
using namespace std;

int main() {
	int n;
	int a[5];
	
	for(int i = 1; i <= 5; i++)
{
	cout << "a[ "<<i<<"]= ";
	cin >> a[i];
}
	for(int i = 1; i<=5 ; i++){
		cout << "Mang la : "<< a[i] <<endl;
	}
	
}