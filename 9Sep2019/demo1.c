#include<stdio.h>
//declaration
void sum();
void sub();
void mul();
void div();




int main(){
    int choice;
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Division\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    //calling
    // sum();
    switch (choice)
    {
    case 1:sum();
        break;
    case 2:sub();
        break;
    case 3:mul();
        break;
    case 4:div();
        break;
    
    default: printf("Invalid Choice\n");
        break;
    }
    return 0;
}

//definition
void sum(){
    //variable declaration
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("%d\n",a+b);

}
void sub(){
    //variable declaration
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("%d\n",a-b);

}
void mul(){
    //variable declaration
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("%d\n",a*b);

}
void div(){
    //variable declaration
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("%d\n",a/b);

}