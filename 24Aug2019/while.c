#include<stdio.h>

int main(){

    int i=0;

    //{}->block of while
    while(i<5){
        printf("%d\n",i);
        i++;//i = i + 1
    }

    //1 Iteration -->0<5 -> true ->0
    //2 Iteration -->1<5 -> true ->1

    return 0;
}