#include<iostream>
using namespace std;

int check(int num){ 
    int temp=num;
    int digit=0;
    int power=0;
    int sum=0;
    while(temp>0){ 
        temp=temp/10;
        power++;
    }


    while(num>0){ 
        digit = num%10;
        num = num/10;
        sum = sum + pow(digit,power);
    }


    return sum;
}

int main(){ 

    int num;
    int init,term;
    cout<<"Enter Range\nFrom:  "<<endl;
    cin>>init;
    cout<<"Upto: "<<endl;
    cin>>term;

    for(int i=init; i<=term; i++){
    if(i==check(i))
    cout<<i<<" Is a Armstrong"<<endl;
    }

    return 0;
}