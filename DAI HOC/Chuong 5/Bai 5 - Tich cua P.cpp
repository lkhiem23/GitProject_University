#include<iostream.h>
using namespace std;

int main(){
	int n;
	int s = 1;
	int i = 1;
	
	cout<<"nhap n: ";
	cin>>n; 
	 
 	do{
		if(n < 1){
			cout << "So n khong the am, vui long thu lai!" << endl;
			return n;
		}
		s *= (i*2-1); 
		i++;
		
	} while(i <= n);
		cout << "Tich cua P = 1 * 3 * 5 *... * (2n-1) la : "<< s << endl; 
	return 0;
} 