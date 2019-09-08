#include<stdio.h>
void checkPrime(int);

int main(){

    int num = 0;
    printf("Enter a number\n");
    scanf("%d",&num);
    
    checkPrime(num);
    return 0;
}


void checkPrime(int a){

    int i=2,temp=0;

    for(i=2;i<=a/2;i++){
        if(a%i==0){
            // temp=1;
            printf("NUmber is not prime\n");
            break;
        }
        else{
           printf("NUmber is prime\n"); 
        }
    }

    // if(temp == 0){
    //     printf("Number is Prime\n");
    // }
}