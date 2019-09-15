#include<stdio.h>

int main(){
    int a[10];
    printf("Enter the number of elements in the array\n");
    int n =0 ;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to insert\n");
    int ele = 0;
    scanf("%d",&ele);
    a[n] = ele;

    for(i=0;i<n+1;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");

    return 0;
}