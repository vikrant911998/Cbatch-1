#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;


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

    return 0;
}