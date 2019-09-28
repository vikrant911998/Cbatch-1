#include<stdio.h>

int main(){
    int a[2][2];
    int b[2][2];
    int c[2][2];

    int i=0,j=0;
    printf("Enter the elements of a\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of b\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    int k=0,sum=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=0;
            for(k=0;k<2;k++){
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }
    printf("*****************\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }





    return 0;
}