#include<iostream>
using namespace std;
bool checkPrime(int num) {

    for(int i=2; i<num; i++){ 
        if(num%i==0)
        return false;
        break;
    }
    
    return true;

}
void check(int num){ 
    int temp = num;
    int digit;
    int order=0;

    int flag = 0;
    while(temp>0){ 
        temp = temp/10;
        order++;
    }
    int power = order;

    for(int i=1; i<=order; i++){ 
        digit = num%10;
        num=num/10;
        num = num + (digit* pow(10,power-1));
        cout<<"Circular Nums:  "<<num<<endl;
        
        if(checkPrime(num))
        flag++;

    }

    if(flag == 4)
    cout<<"Given Number is Circular Prime"<<endl;

    else 
    cout<<"Not a circular prime"<<endl;

}


int main(){ 

    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    check(num);

    return 0;
}