#include<iostream>
using namespace std;


int main(){
    // int a=0,b=0;
    // cout<<"Enter a number";
    // cin>>a>>b;
    // cout<<"Number : "<<a<<" "<<b<<endl;

    int a[5],i=0;
    cout<<"Enter the elements of the array"<<endl;

    for(i=0;i<5;i++){
        cin>>a[i];
    }

    cout<<"Array :"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }


    return 0;   
}