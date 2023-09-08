#include<iostream>
using namespace std;

int addrow(int n){
    int sum=0;
    for(int i=0;i<=n; i++)
    sum = sum + i;
    return sum;
}

void floyd(int num){ 
    int val=1;
    for(int i=1; i<=num; i++){ 
        for(int j=1; j<=i; j++){ 
            cout<<val<<"  ";
            val++;
        }
        cout<<endl;
    }
}

int main(){ 

    int range;
    cout<<"ENter rows: "<<endl;
    cin>>range;

    floyd(range);

    return 0;
}