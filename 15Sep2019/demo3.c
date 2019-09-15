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
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    printf("Enter the element you want to insert\n");
    int ele = 0;
    scanf("%d",&ele);
    
    // 2, 10 ,22 ,8,4 ,0,0,0,0,0
    for(i=n;i>0;i--){
        a[i] = a[i-1]; 
    }
    a[0] = ele;
    for(i=0;i<n+1;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}