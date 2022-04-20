#include <iostream.h>
#include <math.h>
#define PI 3.14
using namespace std;

int main(){
	
	float r;
	float p,s;
	cout << "Nhap ban kinh hinh tron r = ";
	cin >> r;
	
	p = 2*PI*r;
	
	s = PI*r*r;
	
	cout << "Dien tich hinh tron la :" << s <<endl;
	cout << "Chu vi hinh tron la :" << p << endl;
	
	return 0;
}