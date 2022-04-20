#include<iostream.h>
using namespace std;

int ktsonguyento(int n){
		int s=0;
		for(int i=1;i <= n ;i++){
			if(n%i==0){
				s++; 
			} 
		} if (s==2){
			return 1; 
		} 
		return 0; 
	}
int main(){
	int n;
	
	cout<<"Kiem tra nguyen to tu 0 den :";
	cin>>n; 
	
	for(int i=1;i <= n ;i++){
		if (ktsonguyento(i) == 1){
			cout<<"Cac so nguyen to la : " << i << endl; 
		}
	} 
}	