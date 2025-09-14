#include<iostream>
using namespace std;
int main()
{
    int n=3,i=1;
    char ch='A';
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<ch<<'\t';
            j++;
            ch++;
        }
        cout<<endl;
        i++;
        
    }
}