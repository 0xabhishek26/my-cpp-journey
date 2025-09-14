#include<iostream>
using namespace std;
int main()
{
    int n=5,i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<< i<<'\t';
            j++;
        }
        cout<<endl;
        i++;
    }
}