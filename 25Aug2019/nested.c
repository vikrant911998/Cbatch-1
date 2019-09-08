#include<stdio.h>

int main(){

    int j=0,i;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    // printf("\n");
    return 0 ;

}