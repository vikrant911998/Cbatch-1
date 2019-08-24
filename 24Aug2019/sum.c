#include<stdio.h>

int main(){

    int a,sum=0;

    printf("Enter a number");
    scanf("%d",&a);
    
    while(a != 0){
        int temp  = a%10;
        sum  = sum + temp;
        a = a/10;
    }

    printf("The sum is %d\n",sum);
    
    return 0;
}