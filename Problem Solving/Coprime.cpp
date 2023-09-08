#include<iostream>
using namespace std;

void check(int num1,int num2){ 
    int count=0;
    for(int i=1; i<max(num1,num2); i++){ 
        if(num1%i==0 && num2%i==0){
            cout<<i<<endl;
            count++;
        }
    }

    if(count>1)
    cout<<"This are not Co-Prime Number"<<endl;

    else
    cout<<"This are Co-Prime Number"<<endl;

}

int main(){ 

    int num1,num2;

    cout<<"ENter Number: "<<endl;
    cin>>num1>>num2;
    
    check(num1,num2);

  
    return 0;
}