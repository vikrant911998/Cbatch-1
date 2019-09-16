#include<stdio.h>

int main(){

    int a[3][3];//[ [1,2,3] , [4,5,6] , [7,8,9] ]  ->a[0][0],a[0][1],a[0][2]

    int i=0,j=0;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }

    }

    printf("Matrix Elements :\n");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            printf("%d  ",a[i][j]);

        }
        printf("\n");
    }

    return 0;
}