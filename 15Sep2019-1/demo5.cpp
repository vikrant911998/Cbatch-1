#include<iostream>
using namespace std;
void hello(int );

void hello(int n){
    if(n==1)
        return;
    cout<<"Hello World"<<endl;
    hello(n-1);
}

int main(){ 
    hello(5);
    
    return 0;
}

