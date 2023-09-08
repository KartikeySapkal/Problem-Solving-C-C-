#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"ENter Number: "<<endl;
    cin>>num;

    if(num%7==0 || num%10==7)
    cout<<"Buzz Number"<<endl;

    else
    cout<<"Not a Buzz Number"<<endl;

    return 0;
}