#include<iostream>
using namespace std;

void check(int num){ 
    int flag = 0;
    int redflag=0;
    int sum=0;
    int digit;
    int order=0;
    int temp = num;
    
    while(temp>0){ 
        temp = temp/10;
        order++;
    }

    for(int i=2; i<num; i++){ 
        if(num%i==0)
        flag++;
    }
    if(flag==0)
    redflag++;

    // cout<<"Redflag: "<<redflag<<endl;

    while(num>0){ 
        digit = num%10;
        num = num/10;
        sum = sum + (digit*pow(10,order-1));
        order--;
    }
    cout<<"Twisted Value is : "<<sum<<endl;

    flag = 0;
    for(int i=2; i<sum; i++){ 
        if(sum%i==0)
        flag++;
    }
    
    if(flag==0)
    redflag++;

    // cout<<"Redflag: "<<redflag<<endl;

    if(redflag==2)
    cout<<"Number is twisted prime"<<endl;

    else 
    cout<<"No is not a twisted prime no."<<endl;

}

int main(){
    int num;
    cout<<"ENter Number: "<<endl;
    cin>>num;

    check(num);


    return 0;
}