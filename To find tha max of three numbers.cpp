#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    system("cls");
    cout<<"Enter the second number: ";
    cin>>b;
    system("cls");
    cout<<"Enter the third number: ";
    cin>>c;
    system("cls");
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is the greatest number out of three.";
        }
    }
    else if(b>c)
    {
        cout<<b<<" is the greatest number out of three.";
    }
    else
    {
        cout<<c<<" is the greatest number out of three.";
    }
    return 0;
}
