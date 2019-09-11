#include<stdio.h>
int factorial(int);

int main(){
    int result = factorial(5);

    printf("Result : %d\n",result);
    return 0;
}

int factorial(int n){
    if(n==1)
        return 1;

    int temp = n*factorial(n-1);
    
    return temp;
}

// f(5)->5*f(4)->4*f(3)->3*f(2)->2*f(1)
