#include<iostream>
using namespace std;
int main()
{
    int n=4,i=1,c=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            if(j<=n-i)
            {
                cout<<" \t";
            }
            else
            {
                cout<<c<< '\t';
                c++;
            }
            j++;
        }
        cout<<endl;
        i++;
        
    }
}