#include<stdio.h>
int sum(int,int);


int main(){
    int a,b;
    
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    int add = sum(a,b);

    printf("The sum is %d",add);
    return 0;
}

int sum(int a, int b){
    int s = a+b;

    return s;
}