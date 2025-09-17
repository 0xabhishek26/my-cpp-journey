#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. :  ";
    cin>>n;
    int a=1,b=0;
    for(int i=1;i<=n;i++)
    {
        cout<<b<<'\t';
        b+=a;
        a=b-a;
    }
}