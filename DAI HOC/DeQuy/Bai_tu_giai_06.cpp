#include <iostream>
using namespace std;
void Chuyendia(int num, char x, char y, char z) {
   if (num > 0) {
      Chuyendia(num - 1, x, z, y);
      cout<< x<<" -> "<< z <<endl;;
      Chuyendia(num - 1, y, x, z);
   }
}
 
int main() 
{
   int n;
   cout<<"Nhap so dia: ";cin>>n;
   cout<<"Viec chuyen dia nhu sau:"<<endl;
   Chuyendia(n , 'A', 'B', 'C');
   return (0);
}
 
