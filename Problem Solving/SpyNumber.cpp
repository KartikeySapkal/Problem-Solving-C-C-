#include<iostream>
using namespace std;

void check(int num){ 

    int digit;
    int sum=0;
    int prod=1;


    while(num>0){ 
        
        digit=num%10;
        num=num/10;
        prod = prod*digit;
        sum = sum+digit;
    }

    cout<<"Sum is: "<<sum<<endl;
    cout<<"Prod is : "<<prod<<endl;

    if(sum==prod)
    cout<<"Given Number is Spy Number"<<endl;

    else
    cout<<"Not a Spy Number"<<endl;


}

int main(){ 

    int num; 
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}