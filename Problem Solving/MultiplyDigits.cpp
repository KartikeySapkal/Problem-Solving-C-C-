#include<iostream>
using namespace std;

void check(int num){ 
    int digit;
    int prod =1;
    while(num>0){

        digit = num%10;
        num = num/10;
        prod = digit*prod;
    }
    cout<<"Product of Number is: "<<prod<<endl;
}

int main(){ 
    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}