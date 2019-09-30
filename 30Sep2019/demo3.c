#include<stdio.h>

typedef struct Student{
    int rollno;
    int marks;
}Stud;

// struct Student s1;
Stud s2;

int main(){
    Stud s1;

    printf("Enter the roll no\n");
    scanf("%d",&s1.rollno);

    printf("ROll NO - %d",s1.rollno);

    return 0;
}