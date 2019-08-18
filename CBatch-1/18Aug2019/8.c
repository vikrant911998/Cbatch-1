#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter the three sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b==c){
        printf("Equilateral triangle\n");
    }
    else if(a==b || b==c || c==a){
        printf("Isoceles triangle\n");
    }
    else{
        printf("scalene triangle\n");
    }
    return 0;
}