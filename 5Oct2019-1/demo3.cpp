#include<iostream>
using namespace std;

int main(){
    char a[5][10]={"vikrant","saurabh","rahul","deepak","rohit"};
    char temp[10];
    temp = a[1];
    a[1] = a[3];
    a[3] = temp;

    for(int i=0;i<5;i++){
        cout<<a[i]<
    }

    return 0;
}