#include<iostream>
using namespace std;


void spell(int digit){ 
    switch(digit){
        case 1: 
        cout<<"One ";
        break;
        case 2: 
        cout<<"Two ";
        break;
        case 3: 
        cout<<"Three ";
        break;
        case 4: 
        cout<<"Four ";
        break;
        case 5:
        cout<<"Five ";
        break;
        case 6: 
        cout<<"Six ";
        break;
        case 7: 
        cout<<"Seven ";
        break;
        case 8: 
        cout<<"Eight ";
        break;
        case 9: 
        cout<<"Nine ";
        break;
        case 0:
        cout<<"Zero ";
    }
}

void check(int num){ 
    
    int temp = num;
    int digit;
    int order=0;

    while(num>0){ 
        num = num/10;
        order++;
    }
    int sum=0;

    while(temp>0){ 
        digit = temp%10;
        temp = temp/10;
        sum = sum + digit * pow(10,order-1);
        order--;
    }
    // cout<<"Sum is : "<<sum<<endl;

    while(sum>0){ 
        digit = sum%10;
        sum = sum/10;
        spell(digit);
    }

}

int main(){ 

    int num;
    cout<<"Enter Num: "<<endl;
    cin>>num;

    check(num);

    return 0;
}