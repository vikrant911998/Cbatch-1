#include<stdio.h>
int sum();


int main(){
    int result = sum();
    printf("The result is %d\n",result);
    return 0;
}

int sum(){
    int a=4,b=5;
    return (a+b);
}