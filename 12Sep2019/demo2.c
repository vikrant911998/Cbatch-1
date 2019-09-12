#include<stdio.h>

int main(){
    
    int a[]={21,43,71,93,24};
    int i=0,j=4;
    printf("Before reversing\n");

    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }

    for(i=0;i<j;i++){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }

    return 0;
}