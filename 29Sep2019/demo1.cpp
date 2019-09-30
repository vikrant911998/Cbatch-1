#include<iostream>
using namespace std;

int main(){
    int size = 5;
    int a[]={1,2,3,4,5};
    int i=0,j=size-1;

    for(i=0;i<j;i++){
        int temp = a[i];
        a[i] =a[j];
        a[j] = temp;
        j--;
    }

    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}