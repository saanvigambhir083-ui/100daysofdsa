// Problem Statement:
// Implement a Queue using a linked list supporting enqueue and dequeue operations.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void enqueue(int value)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode== NULL)
 {
    printf("memory allocation failed.");
 }
 newnode->data= value;
 newnode->next=NULL;

 if(front==NULL)
 {
    front=rear=newnode;
 }
 else{
    rear->next=newnode;
    rear=newnode;
 }
}
void dequeue()
{
 struct node *temp;
 if(front==NULL)
 {
    printf("Queue Empty");
    return;
 }
 temp=front;
 printf("%d deleted \n", front->data);
 front=front->next;
 free(temp);
 if(front==NULL)
 rear=NULL;
}
void display()
{
 struct node *temp;
 if(front==NULL)
 {
    printf("Queue Empty");
    return;
 }
 temp=front;
 while(temp!=NULL)
 {
    printf("%d ", temp->data);
    temp=temp->next;
 }
 printf("\n");
}
void main()
{ int choice;
 do{
    printf("Enter 1 for insertion, 2 for deletion, 3 to display , 4 to exit:");
 scanf("%d",&choice);
 switch(choice)
 { int value;
   case 1:printf("Enter value to be inserted:");
            scanf("%d",&value);
            enqueue(value);
            break;
   case 2:dequeue();
          break;
   case 3: display();
           break;
   case 4: break;
   default: printf("Wrong input./n");
 }
 } while(choice!=4);
}