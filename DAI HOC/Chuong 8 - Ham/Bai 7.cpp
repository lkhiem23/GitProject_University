#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
double bieuthuc(int n);

int main(int argc, char *argv[])
{ 

  int n;
  cout<<"Nhap n bang: ";
  cin>>n;
  
  cout<<"Ket qua: "<<bieuthuc(n)<<endl;
  
  return 0;
}
double bieuthuc(int n){
  
   if(n==1){
   return 1;
   }
   else{ 
   return(pow((float)n,n)* bieuthuc(n-1)); 
   }
}
