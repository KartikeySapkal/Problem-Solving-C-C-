#include<iostream>
using namespace std;

void check(int num){

    bool flag=false;

    for(int i=1; i<num; i++){ 
        if(num-(i*(i+1))==0)
        flag = true;
    }

    if(flag)
    cout<<"Given Number is Pronic Number"<<endl;

    else
    cout<<"Given Number is Not Pronic Number"<<endl;
}

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num; 

    check(num);

    return 0;
}