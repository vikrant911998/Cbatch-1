#include<stdio.h>

int main(){

    int i=1;

    printf("\nEven Numbers\n");
    while(i<=10){
        if(i%2 == 0)
            printf("%d   ",i);

        i++;
    }
    i=1;
    printf("\nOdd Numbers\n");
    while(i<=10){
        if(i%2 != 0)
            printf("%d   ",i);

        i++;
    }
    return 0;
}