#include<iostream.h> 
using namespace std;
int timucln(int a,int b){
	int ucln;     
	while(a!=b){  // vong lap chay khi a != b 
		if (a > b){  
			a-=b;    // neu a > b thi a= a-b; 
		} 
		else{
			b-=a;    // neu b > a thi b= b-a 
		}     
	} return a;  //vong lap het thuc thi tra ve a 
} 
int main(){
	int p,q,a;
	cout<<"Nhap p: ";
	cin>>p;
	cout<<"Nhap q: ";
	cin>>q; 
    cout<<"uoc chung lon nhat cua p va q la: "<<timucln(q,p)<<endl;
	cout<<"boi chung nho nhat la: "<<(p*q)/timucln(p,q)<<endl;   
}      