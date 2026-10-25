//Implementation of linked list
#include<stdio.h>
#include<stdlib.h>

//creation of Node
struct Node
{
    int data;
    struct Node *next;
};

//function to display the linked list
void display(struct Node *node)
{
   while (node!=NULL)
   {
    printf("%d->" ,node->data);
    node=node->next;
   }
   printf("NULL");
   
}
int main(){

    //declaration and initialisation of all the nodes of a linked list
    struct Node *head=NULL;
    struct Node *node1=NULL;
    struct Node *node2=NULL;
    struct Node *node3=NULL;

    //dynamic memory allocation of LL
    head=(struct Node*)malloc(sizeof(struct Node));
    node1=(struct Node*)malloc(sizeof(struct Node));
    node2=(struct Node*) malloc(sizeof(struct Node));
    node3=(struct Node*)malloc(sizeof(struct Node));

    //initialisation of all the nodes with data and pointing to the next node
    head->data=5;
    head->next=node1;

    node1->data=6;
    node1->next=node2;

    node2->data=9;
    node2->next=node3;

    node3->data=7;
    node3->next=NULL;

    printf("LinkedList:\n");
    display(head);

    return 0;
}


