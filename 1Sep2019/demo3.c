#include<stdio.h>
//Declaration or prototype
int sum(int ,int );
int sum1();
void display();
void show(int);

int main(){
    //Calling Site
    // int f = sum(4,5);
    // int f = sum1();
    // printf("The value of sum is %d\n",f);
    // display();
    show(56);
    return 0;
}


// 1. function with return type and with argument
//function definition
int sum(int i, int j){

    return (i+j);
}

// 2. function with return type and no argument

int sum1(){
    return 20;
}

// 3.function with no return type and no argument
void display(){
    printf("Display function called\n");
}

// 4.function with no return type but argument
void show(int a){
    printf("The value of a is %d\n",a);
}


// return_type function_name(arguments){

//     return ;
// }