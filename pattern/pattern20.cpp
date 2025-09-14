#include<iostream>
using namespace std;
int main()
{
    int n=4,i=1;
    
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            if(j<=i-1)
            {
                cout<<" \t";
            }
            else
            {
                cout<<i<< '\t';
            }
            j++;
        }
        cout<<endl;
        i++;
        
    }
}