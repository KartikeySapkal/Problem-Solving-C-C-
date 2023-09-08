#include<iostream>
using namespace std;

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    int fact=1;

    for(int i=num; i>=1; i--){ 
        fact = fact*i;
    }

    cout<<"factorial of Number is: "<<fact<<endl;

    return 0;
}