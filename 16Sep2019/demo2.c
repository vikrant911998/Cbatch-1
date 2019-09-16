#include<stdio.h>

int main(){
    int a[10],n=0;
    
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    
    int i=0;
    for(i=0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&a[i]); 
    }
    
    printf("Array before\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");


    int loc = 0;
    printf("Enter the index \n");
    scanf("%d",&loc);

    int value = 0;
    printf("Enter the value \n");
    scanf("%d",&value);

    printf("Array after\n");
    for(i=0;i<n;i++){
        if(i==loc)
        {
            a[i] = value;
            printf("%d  ",a[i]);
        }
        else{
            printf("%d  ",a[i]);
        }
    }
    printf("\n");


    return 0;
}