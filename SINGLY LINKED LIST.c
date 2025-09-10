#include<stdio.h>
#include<stdlib.h>
typedef struct Node //singly linked list
{
    int data;
    struct Node *next;
} Node;
void accept(Node **r,int n){
    int i;
    Node *temp;
    for(i=0;i<n;i++){
        if((*r)==NULL){
            (*r)=temp=(Node *)malloc(sizeof(Node));
            scanf("%d",&temp->data);

        }
        else{
            temp->next=(Node *)malloc(sizeof(Node));
            temp=temp->next;
            scanf("%d",&temp->data);

        }
    }
    temp->next=NULL;
}
void display(Node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}
int main(){
    int n;
    Node *root = NULL;
    printf("enter n");
    scanf("%d",&n);

    accept(&root,n);
    printf("\nGiven data is:\n");
    display(root);
}