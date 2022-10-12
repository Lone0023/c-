#include<iostream>
using namespace std;
int main()
{
    int amount_1;
    int amount_2;
    cout<<"Enter the money given by your mother: "; //cout is the the functions that displays the output.
    cin>>amount_1; //cin is the function that takes the input;
    cout<<"Enter the money given by your father: ";
    cin>>amount_2;
    int sum = amount_1 + amount_2;
    cout<<"The total money you have is: "<<sum;
    return 0;
}

