#include<iostream>
using namespace std;

int main(){
    int a[10];
    int b = 0;
    int i=0,size=0,index=0;
    cout<<"Enter the number of elements  in the array"<<endl;
    cin>>size;

    for(i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<"element of the array"<<endl;
        cin>>a[i];
    }
    cout<<"Array before"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Enter the element to be inserted"<<endl;
    cin>>b;
    cout<<"Enter the index"<<endl;
    cin>>index;

    for(i=size;i>index;i--){
        a[i] = a[i-1];
    }
    a[index] = b;

    cout<<"Array after"<<endl;
    for(i=0;i<=size;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}