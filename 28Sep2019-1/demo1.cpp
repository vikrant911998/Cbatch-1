#include<iostream>
using namespace std;

int main(){
    int i=1;
    int j=1;

    for(i=1;i<=5;i++){
        if(i==3 || i==2){
           continue; 
        }
        j++;
    }
    printf("%d and %d\n",i,j);


    return 0;
}