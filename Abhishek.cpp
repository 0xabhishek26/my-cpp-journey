#include<iostream>
using namespace std;
int main()
{
    int r=0;
    if(r==1)
        cout<<"true";
    while(r%2==0)
    {
        r=r/2;
        if(r==1)
            cout<< "true";
    }
    cout<<"false";
}