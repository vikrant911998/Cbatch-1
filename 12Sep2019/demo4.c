#include<stdio.h>

int main(){
    int b=3;
    int *f = &b;

    int a[]={21,45,31,67,93,40};
    int *p = a;

    int i=0;
    *(p+2) = 500;
    for(i=0;i<6;i++){
        printf("Value : %d\n",*(p+i));
    }

    

    return 0;
}