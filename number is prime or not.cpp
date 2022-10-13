#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Please enter your number: ";
    cin>>n;
    for( i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"The given number is not a prime number."<<endl;
        }

    }
    if(i==n)
    {
        cout<<"Your number is prime."<<endl;
    }
    return 0;
}
