#include<stdio.h>
int factorial(int);

int main(){
    int a=0;
    printf("Enter a number\n");
    scanf("%d",&a);

    int result = factorial(a);
    
    printf("Factorial : %d\n",result);
    return 0;
}
// int factorial(int a){
//     if(a==1) return 1;
//     return a*factorial(a-1);
// }
int factorial(int a){
    int i=0;
    int fact=1;

    for(i=1;i<=a;i++){
        fact = fact *i;
    }
    return fact;
}