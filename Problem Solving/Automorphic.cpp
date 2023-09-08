#include<iostream>
using namespace std;

void check(int num){ 

    int order=0;
    int temp = num*num;
    int temp2=num;

    while(temp2>0){ 
        temp2 = temp2/10; 
        order++;
    }

    int div = pow(10,order);

    if(temp % div ==num)
    cout<<"Automorphic Number"<<endl;

    else
    cout<<"Not Automorphic"<<endl;

    cout<<"Num is : "<<num<<endl;
    cout<<"Square is: "<<num*num<<endl;

}

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);    

    return 0;
}