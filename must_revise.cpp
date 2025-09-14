#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the character : ";
    a=cin.get();
    if (a>='a'&&a<='z')
    {
        cout<<"Lower Case"<<endl;
    }
    else if(a>='A'&&a<='Z')
    {
        cout<<"uppwecase"<<endl;
    }
    else if(a>=1&&a<=9)
    {
        cout<<"digit"<<endl;
    }
}