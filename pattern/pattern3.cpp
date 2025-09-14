#include<iostream>
using namespace std;
int main()
{
    int n=3,i=1,m=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<m<<'\t';
            j++;
            m++;
        }
        cout<<endl;
        i++;
    }
}
