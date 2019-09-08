#include<stdio.h>

int main(){

    int i=0;

    do{
        printf(i);
        i++;
    }while(i<5);

    for(;i<5;i++){
        printf("%d",i);
    }

    return 0;
}