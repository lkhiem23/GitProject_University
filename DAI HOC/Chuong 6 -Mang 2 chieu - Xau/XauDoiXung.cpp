#include<iostream.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,t=0;
    int n = s.size();
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
            t=-1;
        else
            t=0;
    }
    if(t==-1)
        cout<<"La chuoi doi xung"<<endl;
    else
        cout<<"Khong la chuoi doi xung"<<endl;
    return 0;
}