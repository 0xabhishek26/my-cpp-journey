#include<iostream>
using namespace std;
int main()
{
    int n=6,i=0;
    while(i<n)
    {
        char j='A'+i;
        int k=1;
        while(k<=n)
        {
            cout<<j<<'\t';
            k++;
        }
        cout<<endl;
        i++;
    }
}