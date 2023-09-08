#include<iostream>
using namespace std;
void check(int num){ 

    int digit;
    int key = num;
    int power=0;
    int temp=num;
    int dummy = 0;
    int order=0;

    while(num>0){ 
        num = num/10;
        order++;
    }
    cout<<"Order is "<< order<<endl;
    while(temp>0){ 
        digit = temp % 10;
        temp = temp/10;
        dummy = dummy + (digit * pow(10,order-1));
        order--;
    }
    cout<<"Dummy : "<<dummy<<endl;

    if(dummy == key)
    cout<<"Palindrome"<<endl;

    else 
    cout<<"Not Palindrome"<<endl;

}

int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}