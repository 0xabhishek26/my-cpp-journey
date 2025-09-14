#include<iostream>
using namespace std;
int main()
{
    int n=3,i=1;
    
    while (i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while(j<=i)
        {
            cout<<ch<<'\t';
            j++;
            ch++;
        }
        cout<<endl;
        i++;
        
    }
}