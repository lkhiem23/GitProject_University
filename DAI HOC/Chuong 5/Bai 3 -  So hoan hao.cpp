#include<iostream>

using namespace std;

int main()
{
 	cout << "Tim cac so hoan hao trong pham vi n.\n";
	    
	int n,sum;
    
	cout << "\nNhap n = "; 
	cin >> n;
    
	for ( int i = 1;i <= n;i++)
    {
        sum = 0;
        for (int j = 1 ; j <= i;j++)
            if (i%j==0)
                sum+=j;
        if (sum / 2.0 == i)
            cout << "So hoan hao la :"<< i << endl;
	}
    return 0;
}