#include<stdio.h>

int main(){
    int num = 4325;// 14
    int result =0;

    while(num != 0){
        int temp = num%10;//5
        result = result + temp;
        num = num/10;
    }

    for( ; num != 0 ; ){

    }
    printf("The sum is %d",result);
    return 0;
}