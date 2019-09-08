#include<stdio.h>
void calc(int);

int main(){
    int a=0;

    printf("Enter a number\n");
    scanf("%d",&a);

    calc(a);

    return 0;
}

void calc(int num){
    int reverse = 0 ;

    while(num!=0){
        int temp = num%10;
        reverse = reverse*10 +temp;
        num = num/10;
    }

    printf("THe reverse number is %d\n",reverse);

}


// void sum(){

// }

// void sum(int a){

// }