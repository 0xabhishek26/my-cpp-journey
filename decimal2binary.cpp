#include<iostream>
using namespace std;
int main()
{
    int n,b=0,i=1;
    cout<<"enter the no.";
    cin>>n;
    while(n!=0)
    {
        if((n&1)!=0)
        {
            b+=(1*i);
        }
        n>>=1;
        i*=10;
        
        
    }
    cout<<b;
}