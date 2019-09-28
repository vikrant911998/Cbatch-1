#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int b[5];
    int i=0,j=0;
    int sum;
     
    for(i=0;i<5;i++){
        sum = 0;
        for(j=0;j<i+1;j++){
            sum = sum+a[j];
        }
        // printf("%d\n",sum);
        b[i] = sum;
    }

    for(i=0;i<5;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}