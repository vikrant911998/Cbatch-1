#include<stdio.h>

int main(){
    int a = 2;
    int *p = &a;
    // p
    // *p

    int *f  = (int *)malloc(2);

    *f = 56;

    return 0;
}