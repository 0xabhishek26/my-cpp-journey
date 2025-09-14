#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>> n;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=n;j>=1;j--)
    //     {
    //         cout<<j<<'\t';

    //     }
    //     cout<<endl;
    // }
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}