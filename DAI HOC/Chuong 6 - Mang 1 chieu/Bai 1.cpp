#include<iostream.h>
using namespace std;

int main(){
	int n;
	float s=0,dem=0;
	
	cout << "\nNhap so phan tu trong mang: ";
	cin >> n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cout << "\nNhap a["<<i<<"]= ";
		cin >> a[i]; 
		if (a[i]<0){
			dem++;
			s+=a[i]; 
		} 
	} 
	if (dem==0){
		dem++;
		cout<<"\ntrung binh cong cac phan am trong mang la: "<<s/dem<<"\n";
	} 
	else{
		cout<<"\ntrung binh cong cac phan am trong mang la: "<<s/dem<<"\n";
	}
	
	for(int i=0;i<n;i++){
	   
	   	if (a[i]%5==0){
   		   cout<<"\nso phan tu chia het cho 5 la : "; 
		   cout<<"a["<<i<<"]="<<a[i]<< "\n" <<endl;
   	} 
}

	int sapxep = 0; 
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			if (a[i]<a[j]){
				sapxep=a[i]; 
				a[i]=a[j];
				a[j]=sapxep; 
			} 
		} 
	}
	 cout<<"\nMang theo thu tu giam dan la : "; 
      for(int i=0;i<n;i++){
    	cout << a[i] << "  "<<endl;
    	cout <<"\n";
      }
return 0;
} 