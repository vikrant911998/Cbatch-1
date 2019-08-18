#include<stdio.h>

int main(){

    int a =0 ;
    printf("Enter the number\n");
    scanf("%d",&a);

    if(a>0)
        printf("Number is Positive\n");
    else if(a==0)
        printf("Number is Zero\n");
    else
        printf("Number is Negative\n");
    return 0;
}