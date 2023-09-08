#include<iostream>
using namespace std;

void check(int num){ 

    if(num%2==0 || num%3==0 || num%5==0 )
    cout<<"Given Number is Ugly Number"<<endl;
}

int main()
{ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}