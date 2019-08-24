#include<stdio.h>

int main(){

    int n,reverse=0;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
//345
    while(n!=0){
        int temp = n%10; 
        reverse =  reverse*10 +temp;
        n = n/10;
    }
    printf(" %d\n",reverse);
    
    return 0;
}