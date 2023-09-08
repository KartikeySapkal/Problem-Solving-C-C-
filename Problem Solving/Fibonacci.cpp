#include<iostream>
using namespace std;
//0,1,1,2,3,5,8,13
int fibo(int n){ 

    if(n==0)
    return 0;

    else if(n==1)
    return 1;
    
    else
    return fibo(n-1)+fibo(n-2);
}

int main(){ 

    int upto;
    cout<<"Upto: "<<endl;
    cin>>upto;

    cout<<fibo(upto)<<" ";

    return 0;
}