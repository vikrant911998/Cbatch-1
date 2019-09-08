#include<stdio.h>

int main(){

    int a = 1234,sum = 0;

    int reverse = 0;

    while(a!=0){
        int temp = a%10;
        reverse = reverse*10 + temp;
        a = a/10;
    }

    return 0;
}


void function_name(int num){

    
}