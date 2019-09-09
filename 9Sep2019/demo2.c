#include<stdio.h>
void sum(int,int);


int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    sum(a,b);

    return 0;
}

void sum(int a, int b){

    printf("The sum is %d",a+b);
}