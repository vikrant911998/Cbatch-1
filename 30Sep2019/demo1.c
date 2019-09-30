#include<stdio.h>

int main(){
    char a[10]="AAAABBCCC\0";
    int i=0;
    int count = 0;

    puts(a);
    for(i=0;i<9;i++){
        count = 0 ;
        while(i<10 && a[i] == a[i+1]){
            count++;
        }
        if(count>0){
            printf("%c%d",a[i],count);
        }
        else{
           printf("%c",a[i]); 
        }
    }
    printf("\n");

    return 0;   
}