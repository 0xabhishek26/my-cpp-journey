#include<iostream>
using namespace std;
int main()
{
    int n=6,i=1,a=1;
    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<a<<'\t';
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
}