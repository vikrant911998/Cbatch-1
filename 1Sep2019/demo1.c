#include<stdio.h>

int main(){
    int i=0,j=0;
    for(i=1;i<6;i++){

        for(j=1;j<6;j++){

            if(j <= 5-i ){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");

    }
    return 0;
}