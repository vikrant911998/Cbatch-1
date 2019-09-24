#include<stdio.h>

int main(){
    int a[6] = {3,4,16,34,76,89};
    int i=0,k=76;
    // for(i=0;i<6;i++){
    //     printf("%d  ",a[i]);
    // }
    // printf("\n");

    int l = 0;
    int u = 5;
    int m=0;
    while(l<=u){
        m = (l+u)/2;

        if(a[m] == k){
            printf("Element found at index %d",m);
            break;
        }
        if(a[m]<k){
            l = m+1;
        }
        if(a[m]>k){
            u = m-1;
        }
    }
    return 0;
}