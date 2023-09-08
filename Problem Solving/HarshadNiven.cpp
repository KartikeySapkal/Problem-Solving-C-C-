#include<iostream>
using namespace std;

void check(int num){ 
    int digit;
    int key = num;
    int sum=0;

    while(num>0){
        digit = num%10;
        num = num/10;
        sum = sum + digit;
    }

    cout<<"Sum is "<<sum<<endl;

    if(key%sum==0)
    cout<<"Harshad/Niven Number"<<endl;

    else
    cout<<"Not a Harshad/Niven Number"<<endl;

}

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}