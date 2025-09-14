#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter the no. :";
    cin>>n;
    while(i<=n)
    {
        int c=1,j=1;
        while(j<=n)
        {
            if (j<=n-i+1)
            {
                
                cout<<c<<'\t';

            }
            else
            {
                cout<<"*\t";
            }
            j++;
            c++;
        }
        c-=2;
        j-=2;
        while(j>=1)
        {
            if(j<=n-i+1)
            {
                cout<<c<<'\t';
            }
            else
            {
                cout<<"*\t";
            }
            j--;
            c--;
        }
        i++;
        cout<<endl;
        
        
    }

}