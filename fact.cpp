// find thee factorial of a given no.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 1;
    cout<<"enter the no.";
    cin>>a;
    b = 1;
    while (b <= a)
    {
        c = c * b;
        b++;
    }
    cout<<c;
    return 0;
}