#include<stdio.h>

int main(){
    int a[10],n=0;
    
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    
    int i=0,k=0;
    for(i=0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&a[i]); 
    }

    printf("Enter the value to be searched\n");
    scanf("%d",&k);

    int l=0,u = n-1;
    int m=0;
    
    while(l<=u){
        m = (l+u)/2;

        if(a[m] == k){
            printf("Element %d found at index %d\n",k,m);
            // break;
        }
        if(a[m]>k){
            u = m-1;
        }
            
        if(a[m]<k){
            l = m+1;
        }
        // printf("L = %d and U = %d and M = %d and A[m] = %d ",l,u,m,a[m]);    
    }
    


    return 0;
}