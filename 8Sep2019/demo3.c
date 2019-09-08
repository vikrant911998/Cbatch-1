#include<stdio.h>
void circ(float);

int main(){
    float r=10;

    circ(r);
    return 0;
}

void circ(float r){
    printf("Circumference : %f\n",2*3.14*r);
}