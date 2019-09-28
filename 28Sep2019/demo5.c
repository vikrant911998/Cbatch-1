#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int b[5];
    int i=0;
    int sum=0;

    for(i=0;i<3;i++){
        sum = a[i]+a[i+1]+a[i+2];
        b[i]  = sum;    
    }
    
    int max=b[i];
    for(i=0;i<5;i++){
        if(max<b[i]){
            max = b[i];
        }
    }
    printf("Max : %d",max);













    // for(i=0;i<3;i++){
    //     if( a[i]>a[i+1] && a[i]>a[i+2] ){
    //         printf("%d is greatest \n",a[i]);
    //     }
    //     if(a[i+1]>a[i] && a[i+1]>a[i+2]){
    //         printf("%d is greatest \n",a[i+1]);
    //     }
    //     else{
    //        printf("%d is greatest \n",a[i+2]); 
    //     }
    // }


    return 0;
}