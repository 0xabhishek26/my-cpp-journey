#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the no,:";
    int n;
    cin>>n;
    for (int i=2;i<(n>>1);i++)
    {
        if(n%i==0)
        {
            cout<<"not a prime no.";
            return 3;
        }
    }
    cout<<"prime no.";
    return 5;
}