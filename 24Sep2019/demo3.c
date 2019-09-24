#include<stdio.h>

int main(){
    int count=0;
    int a[5] = {0,1,1,0,1};
    int i=0;

    for(i=0;i<5;i++){
        if(a[i] == 0)
            count = count + 1;
    }   

    for(i=0;i<5;i++){
        if(i<count)
            a[i] = 0;
        else
        {
            a[i] = 1;
        }
    }

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}