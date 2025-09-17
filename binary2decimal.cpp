#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,s=0,i=0,d;
    cout<<"enter the no.";
    cin>>a;
    while(a!=0)
    {
        d=a%10;
        if(d&1)
        {
            s+=pow(2,i);
        }
        i++;
        a/=10;
    }
    cout<<s;

}