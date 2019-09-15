#include<iostream>
using namespace std;

int main(){
    int a[5],sum=0;

    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin>>a[i];
    }

    cout<<"Enter the value of sum"<<endl;
    cin>>sum;

    for(int i=0;i<4;i++){

        for(int j=i+1;j<5;j++){
            if(a[i] +a[j] == sum){
                cout<<a[i]<<","<<a[j]<<endl;
                
            }
        }

    }
    
    return 0;
}