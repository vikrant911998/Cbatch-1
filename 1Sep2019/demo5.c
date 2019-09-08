#include<stdio.h>
float area(float,float);

int main(){
    float l,b;
    printf("Enter the length and Breadth\n");
    scanf("%f%f",&l,&b);
    
    float res = area(l,b);
    printf("The area is %f",res);
    return 0;
}

float area(float l, float b){
    float a = l*b;

    return a;
}