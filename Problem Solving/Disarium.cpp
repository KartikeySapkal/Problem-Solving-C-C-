#include<iostream>
using namespace std;

void check(int num){ 
    int temp=num;
    int key = num;
    int digit = 0;
    int order = 0;
    int sum= 0;

    while(num>0){ 
        num = num/10;
        order++;
    }    

    while(temp>0){ 
        digit = temp%10;
        temp = temp/10;
        sum = sum + pow(digit,order);
        order--;

    }

    if(sum == key)
    cout<<"Disarium Number"<<endl;

    else
    cout<<"Not Disarium Number"<<endl;



}

int main(){

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}