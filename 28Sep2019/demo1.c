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

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("SUM is :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}