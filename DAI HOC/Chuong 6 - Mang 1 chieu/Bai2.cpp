#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A[100];
    int n;
    int i;
    int Max;
    cout << "Nhap so phan tu trong mang n: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
    cout << "a) Gia tri A[i] = Max va vi tri Max la:\n";
    Max = A[0];
    int vt[100];
    for (i = 0; i < n; i++) {
        if (A[i] >= Max) {
            Max = A[i];
        }
    }
    cout << "Max = " << Max << endl;
    cout << "Vi tri phan tu lon nhat trong mang la: ";
    for (i = 0; i < n; i++) {
        if (A[i] == Max) {
            cout << "A[" << i << "] ";
        }
    }
    cout << "\n\nb) Cac so hoan hao trong mang:\n";
    for (i = 0; i < n; i++) {
        int tam = 0;
        for (int j = 1; j < A[i]; j++) {
            if (A[i] % j == 0) {
                tam += j;
            }
        }
        if (tam != 0 && tam == A[i]) {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    cout << "\nc)Cac so chinh phuong trong mang: \n";
    for (i = 0; i < n; i++) {
        int cb = sqrt(A[i]);
        if ((cb * cb) == A[i]) {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
return 0;
}