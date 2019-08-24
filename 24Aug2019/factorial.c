#include<stdio.h>

int main(){
    int n,result=1;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);

    while(n>0){
        result = result * n;
        n--;
    }
    printf("The factorial is %d",result);

    return 0;
}