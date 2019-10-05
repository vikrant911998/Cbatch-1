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

void FindValue(Node *head,int i){
    Node *temp =head;
    int index= 0;

    while(index<i){
        temp  = temp->next;
        index++;
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

int getIndex(Node *head,int element){
    int index=0;

    while(head!=NULL){
        if(head->data  == element){
            return index;
        }
        index++;
        head = head->next;
    }
    
}

void insertNode(int i, int element,Node *head){

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    Node *temp1 = head;
    Node *temp2 = head;
    int count = 0;


    while(temp2 != NULL){
        count++;
        temp2 = temp2->next;
    }

    if(i>count-1){
        printf("Index Not Valid");
    }

    if(i==0){
        head = newNode;
        newNode->next = temp1;
    }
    else{
        while(index<i-1){
            index++;
            temp1= temp1->next;
        }
        Node *temp3 = temp1;
        temp1->next = newNode;
        newNode->next = temp3;
    }

    
    
}

int main(){
    Node *head = createList();
    printNodes(head);
    length(head);
    FindValue(head,3);
    int index = getIndex(head,45);
    if(index >= 0){
        printf("Index is %d\n",index);
    }
    else{
        printf("Index is %d\n",index);
    }
    return 0;
}