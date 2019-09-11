#include<stdio.h>
void reverse(int );

int main(){
    int a=0;
    printf("Enter a number\n");
    scanf("%d",&a);

    reverse(a);
    return 0;
}

void reverse(int a){
    int r=0;

    while(a!=0){
        int temp = a%10;
        r = r*10+temp;
        a = a/10;
    }

    printf("The reverse number is %d",r);
}