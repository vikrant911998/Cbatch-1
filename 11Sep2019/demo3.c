#include<stdio.h>

int main(){
    
    int b[]= {1,2,3,4,5};

    int i=0,sum=0;

    for(i=0;i<5;i++){
       sum = sum + b[i];
    }

    printf("Sum : %d\n",sum);
    return 0;
}