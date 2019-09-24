#include<stdio.h>

int main(){
    int a[7] = {23,34,45,56,23,76,91};
    int i=0,j=0;

    for(i=0;i<6;i++){
        for(j=i+1;j<7;j++){
            if(a[i]==a[j]){
                printf("Duplicate Element : %d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}