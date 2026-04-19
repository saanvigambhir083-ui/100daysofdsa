//Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* createNode(int data) 
{
   struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
struct Node* insertEnd(struct Node* head, int data) 
{
   struct Node* newNode=createNode(data);
    if (head==NULL)
     return newNode;
    struct Node* temp=head;
    while (temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    return head;
}
struct Node* createList(int n) 
{
    struct Node* head=NULL;
    int x;
    for (int i=0; i<n;i++) 
    {
     scanf("%d", &x);
     head = insertEnd(head, x);
    }
    return head;
}
struct Node* mergeLists(struct Node* l1, struct Node* l2) 
{
  struct Node* dummy=createNode(0);
  struct Node* tail=dummy;
    while (l1!=NULL && l2!=NULL) 
    {
        if (l1->data<=l2->data) 
        {
          tail->next=l1;
          l1=l1->next;
        } 
        else 
        {
          tail->next=l2;
          l2=l2->next;
        }
        tail=tail->next;
    }
    if(l1!=NULL)
     tail->next=l1;
    else
     tail->next=l2;
    return dummy->next;
}
void display(struct Node* head) 
{
    struct Node* temp=head;
    while (temp!=NULL) 
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
}
void main() 
{
    int n, m;
    scanf("%d", &n);
    struct Node* list1=createList(n);
    scanf("%d", &m);
    struct Node* list2=createList(m);
    struct Node* merged=mergeLists(list1, list2);
    display(merged);
}
