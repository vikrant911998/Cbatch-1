#include<iostream>
using namespace std;

int main(){
    int a[5]={34,23,12,56,72};
    int i=0;
    cout<<"Array Before Updation"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    for(i=0;i<5;i++){
        if(i == 2 || i == 4)
            a[i] = 0;
    }

    cout<<"Array after Updation"<<endl;
    
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}