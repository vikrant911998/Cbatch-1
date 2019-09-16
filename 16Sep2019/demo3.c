#include<stdio.h>

int main(){
    int a[10],n=0;
    
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    
    int i=0,j=0;
    for(i=0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&a[i]); 
    }
    int element =0 ;
    printf("Enter the element\n");
    scanf("%d",&element);
    
    
    for(i=0;i<n;i++){
        if(a[i] == element){
            j=1;
            printf("Element %d found at index %d",a[i],i);
            break;
        }
    }

    printf("\n");

    if(j==0){
        printf("Element not found\n");
    }


    return 0;
}