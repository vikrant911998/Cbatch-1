#include<stdio.h>
void display(float,float,float);


int main(){
    float p,r,t;
    printf("Enter the principal, rate and time \n");
    scanf("%f%f%f",&p,&r,&t);
    //calling display()
    display(p,r,t);
    return 0;
}


void display(float p,float r,float t){
    float si = (p*r*t)/100;
    printf("The simple interest is %f",si);
    
}