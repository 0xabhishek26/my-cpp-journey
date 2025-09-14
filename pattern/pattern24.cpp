#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        int c=1;
        while(j<=n)
        {
            if(j<=n-i)
            {
                cout<<' '<<'\t';
            }
            else
            {
                cout <<c<<'\t';
                c++;
            }
            j++;
        }
        c-=2;
        while(c>=1)
        {
            cout<<c<<"\t";
            c--;
            j--;
        }
        cout<<endl;
        i++;
    }
}