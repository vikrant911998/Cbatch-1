#include<stdio.h>
int factorial(int);

int main(){
    int a=0;

    int result = factorial(10);
    printf("The result is %d\n",result);
}

int factorial(int n){
    // printf("The n is %d",n);
    int fact=1;
    while(n>=1){
        fact  = fact*n;
        n--;
    }
    // printf("The fact is %d and n is %d",fact,n);
    return fact;
}