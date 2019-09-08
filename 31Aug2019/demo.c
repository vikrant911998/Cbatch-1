#include<stdio.h>

int main(){

    int percent=0;
    printf("Enter the percent\n");
    scanf("%d",&percent);

    if(percent >=90 && percent <=100){
        printf("A Grade\n");
    }
    else if(percent<=89 && percent >=70){
        printf("B Grade\n");
    }
    else if(percent<=69 && percent>=50){
        printf("C Grade\n");
    }
    else if(percent>=0 && percent<50){
        printf("D Grade\n");
    }
    else{
        printf("Invalid Input\n");
    }

    return 0;
}