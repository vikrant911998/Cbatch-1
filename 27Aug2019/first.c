#include<stdio.h>
void print(int *);

int main(){
    // int c = 9;
    // int *f = &c;
    // printf("%d",f);
    
    int a[5]={1,2,3,4,5};
    print(a);
    
    return 0;
}


void print(int *b){
    int i=0;
    for(i=0;i<5;i++){
        printf("%d",b[i]);
    }
}