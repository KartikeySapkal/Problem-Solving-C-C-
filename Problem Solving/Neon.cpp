#include<iostream>
using namespace std;

int check(int num){ 
    int temp =num*num;
    int digit;
    int sum=0;
    while(temp>0){ 
        digit = temp%10;
        temp = temp/10;
        sum = sum + digit;
    }



    return sum;
}

int main(){ 

    // int num;
    // cout<<"Enter NUmber: "<<endl;
    // cin>>num;

    int init;
    int term;
    cout<<"Enter Range: \nForm: "<<endl;
    cin>>init;
    cout<<"Upto: "<<endl;
    cin>>term;
    

    for(int i=init; i<=term; i++){
    if(check(i) == i)
    cout<<i<<" Is a Neon Number"<<endl;
    }
    // else
    // cout<<"Not a Neon Number"<<endl;

    return 0;
}