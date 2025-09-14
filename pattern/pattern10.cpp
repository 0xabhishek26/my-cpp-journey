#include<iostream>
using namespace std;
int main()
{
    int n=6,i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch<<'\t';
            j++;
        }
        cout<<endl;
        i++;
        
    }
}