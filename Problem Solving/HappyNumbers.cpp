#include<iostream>
using namespace std;

int check(int num){ 

    int temp=num;
    int digit;
    int sum=0;
    while(temp>0){
        digit = temp%10;
        temp = temp/10;
        sum = sum + (digit*digit);
    }
    if(sum>9)
    return check(sum);

    else
    return sum;
}



int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    if(check(num)==1)
    cout<<"Happy Number"<<endl;

    else
    cout<<"Not a Happy Number"<<endl;

    return 0;
}