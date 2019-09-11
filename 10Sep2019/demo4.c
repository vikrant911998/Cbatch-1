#include<stdio.h>
float input();
float allowance1(float);
float allowance2(float);
float allowance3(float);
float netSal(float,float,float,float,int);


int main(){
    int PF = 1400;
    float bs = input();
    float hra = allowance1(bs);
    float da = allowance2(bs);
    float ta = allowance3(bs);

    float ns = netSal(bs,hra,da,ta,PF);

    printf("The net salary is %f",ns);
    return 0;
}

float netSal(float bs,float hra,float da,float ta,int PF){
    float n = (bs+hra+da+ta) - PF;
    return n;
}


float allowance1(float bs){
    return (.3*bs);
}

float allowance2(float bs){
    return (.2*bs);
}

float allowance3(float bs){
    return (.1*bs);
}

float input(){

    float basic = 0;
    printf("Enter the basic salary\n");
    scanf("%f",&basic);

    return basic;
}