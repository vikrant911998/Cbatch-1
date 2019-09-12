#include<stdio.h>

//pointer
int main(){
    int a = 2;
    //pointer variable
    int *p = &a;
    printf("Address : %p\n",p);
    printf("Value : %d\n",*p);

    return 0;
}