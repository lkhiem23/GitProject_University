#include<iostream.h>
#include<math.h>
using namespace std;

int main(){
	
	int n,i,j;
	
	cout << "Nhap n = ";
	cin >> n;
	
	if(n < 1){
		cout << "Khong co so nguyen to."<<endl;
	}
	
	for(i = 1 ; i < n ; i++){
		 for(int j = 2; j < i; j++){
			if(i % j == 0)break;
			else if(j + 1 > sqrt(i)){
				cout << "So nguyen to can tim la: " << i <<endl;
				}	
		}
	}
	

return 0;

}