#include<iostream>
using namespace std;
int main()
{
    int n=6,i=1;
    // while(i<=n)
    // {
    //     int j=1,k=i;
    //     while(j<=i)
    //     {
    //         cout<<k<<'\t';
    //         j++;
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    while(i<=n)
    {
        int j=0;
        while(j<i)
        {
            cout<<i+j<<'\t';
            j++;
        }
        cout<<endl;
        i++;
    }
}