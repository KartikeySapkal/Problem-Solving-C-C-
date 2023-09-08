#include<iostream>
using namespace std;

int fun(int num){ 


    int digit;
    int sum=0;
    while(num>0){ 
        digit = num%10;
        num=num/10;
        sum = sum + digit;
    }
//    cout<<"Sum is: "<<sum<<endl;
   if(sum>9)
   return fun(sum);

   else
   return sum;
}

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;
    
    if(fun(num)==1)
    cout<<"Magic Number"<<endl;

    else
    cout<<"Not a Magic Number"<<endl;


    return 0;
}