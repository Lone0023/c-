#include<iostream>
using namespace std;
int main()
{
    int n;
    while(n>=0)
    {
        cout<<"Please enter your number: "<<endl;
        cin>>n;
    }
    if(n<0)
    {
        cout<<"Error"<<endl;
    }
    return 0;
}
