#include<iostream.h>
int main(){
	
	char a;
	int u=0,v=0; 
	
	do{  
	    
		cout << "Nhap a: "; 
		cin >> (a);
		
		v++;           
		if (a == 'k'){    
		    u++;	
		} 
	}while(a != '*');     
   cout<<"So phan tu da nhap la : " << v-1 << endl;
   cout<<"So phan tu k la: " << u <<endl; 

return 0;
} 