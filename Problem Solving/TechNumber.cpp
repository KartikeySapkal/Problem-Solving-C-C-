#include<iostream>
using namespace std;

void check(int num){ 

    int temp = num; 
    int order = 0;
    int sum = 0;
    int digit;
    int power=0;
    int key = num;
    while(temp>0){ 
        temp = temp/10;
        order++;
    }

    if(order%2!=0){
        cout<<"Not a tech Number"<<endl;
        exit(0);
    }

    for(int i=1; i<=order/2; i++){ 
        digit = num%10;
        num = num/10;
        sum = sum + (digit*pow(10,power));
        power++;
    }
    cout<<"Number is: "<<num<<endl;
    cout<<"Half Part is: "<<sum<<endl;

    if(pow(num+sum,2)==key)
    cout<<"Tech Number Spotted"<<endl;

    else 
    cout<<"Not a Tech Number"<<endl;


}


int main(){ 

    int num;

    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}