#include<iostream>
using namespace std;

void check(int num){
    int temp=num;
    int order=0;
    while(num>0){ 
        num=num/10;
        order++;
    }

    int digit;
    int flag = 0;
    while(temp>0){ 

       digit = temp%10;
       temp = temp/10;

       if(digit==0)
       flag++; 
        
    }
    if(flag>=2)
    cout<<"Duck Number"<<endl;

    else
    cout<<"Not a Duck Number";
}

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}