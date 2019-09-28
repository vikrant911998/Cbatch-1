#include<stdio.h>

int main(){
    int a[5] = {121,315,227,321,415};
    int i=0;
    int temp=0;
    int num=0;
    int number = 4;

    for(i=0;i<5;i++){
        num = a[i];
        while(num!=0){
            temp = num%10;
            num = num/10;
        }
        if(temp == number){
            printf("%d\n",a[i]);
        }

    }

    return 0;
}