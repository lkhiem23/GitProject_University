#include <iostream>
using namespace std;
 
int main(){
    cout <<"Tim uoc cua n :\n";
	
	int n,i;
    cout << "\nNhap n = ";
    cin >> n;
    for(i=1; i<=n ; i++){
    	if(n % i == 0){
	    	cout << "Uoc cua n la : " << i <<endl;
	    }
    	
    }return 1;
}
 