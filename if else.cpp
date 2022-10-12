#include<iostream>
using namespace std;
/*Suppose you have 2 girlfriends Neha and Tina. Neha is one who likes to spend more money whereas Tina is the one who is very understanding
so to decide based upon your savings that with whom you can go on a date this month we can use the concept of If-Else*/
int main()
{
    int savings;
    cout<<"Enter the savings for this month: ";
    cin>>savings;
    if(savings>=5000)//If savings is more than or equal to 5000 then if condition will  be executes other wise else conditon will we executed automatically.
    {
        cout<<"You will go on a date with Neha.";
    }
    else
    {
        cout<<"You will go on a date with Tina.";
    }
    return 0;
}
