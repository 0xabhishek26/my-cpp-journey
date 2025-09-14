#include<iostream>
using namespace std;
int main()
{
    int n=6,i=1;
    while(i<=n)
    {
        int j=i;
        while(j>=1)
        {
            cout<<j<<'\t';
            j--;
        }
        cout<<endl;
        i++;
    }
}