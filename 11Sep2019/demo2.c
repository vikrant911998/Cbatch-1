#include<stdio.h>
//Linear Search


int main(){
    
    int b[]= {23,12,41,57,69};

    int i=0;
    int a=0;
    int flag = 0;
    printf("Enter a number\n");
    scanf("%d",&a);

    for(i=0;i<5;i++){
        if(a == b[i]){
            flag = 1;
            printf("value found at index %d\n",i);
            break;
        }
        // else
        // {
        //     printf("Not found\n");
        // }
        
    }

    if(flag == 0){
       printf("Value not found\n"); 
    }

    return 0;
}