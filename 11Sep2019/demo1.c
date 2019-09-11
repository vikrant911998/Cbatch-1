#include<stdio.h>

int main(){
    //Declaration with size
    int a[5];

    //declaration with initialization
    int b[]= {23,12,41,57,69};

    //declaration with size and initialization
    int c[5]={1,2,3,4,5};

    int i=0;

    printf("Enter 5 elements in the array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("Array Elements : \n");
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}