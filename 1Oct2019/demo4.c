#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void length(Node *head){
    int count =0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    printf("Length : %d \n",count);
}

void FindValue(Node *head,int index){
    Node *temp =head;
    int count= 0;

    while(count<index){
        temp  = temp->next;
        count++;
    }
    printf("Value : %d\n",temp->data);
}


Node* createList(){
    Node *temp=NULL;
    Node *head=NULL;
    int value=0;

    printf("enter the elements of the linked list\n");
    scanf("%d",&value);
    while(value != -1){
        
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        scanf("%d",&value);
    }

    return head;

}

void printNodes(Node *head){
    Node *temp = head;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    Node *head = createList();
    printNodes(head);
    length(head);
    FindValue(head,3);
    return 0;
}