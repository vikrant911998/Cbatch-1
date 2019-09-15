#include<stdio.h>

typedef struct Student{
    int roll_no;
    char name[20];
}Student;

// struct is keyword and Student is the name of structure.
// struct Student s1;
// Student s1;

int main(){
    Student s1,s2;//->{rollno,name}    ->4000{roll_no, name}
    printf("Enter the two rollno\n");
    scanf("%d%d",&s2.roll_no,&s1.roll_no);
    // printf("Enter the rollno\n");
    // scanf("%d",&s1.roll_no);
    printf("%d\n",&s2);
    printf("Roll No 2 : %d\n",s2.roll_no);
    printf("Roll No 1 : %d\n",s1.roll_no);

    return 0;
}