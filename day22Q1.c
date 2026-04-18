//Problem: Count Nodes in Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* createList(int n) 
{
    struct Node *head = NULL, *temp, *p;
    int x;
   for(int i = 0; i < n; i++) 
   {
    scanf("%d", &x);
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head == NULL) 
    {
      head = temp;
     } 
    else 
    {
     p = head;
     while(p->next != NULL) 
     {
         p = p->next;
       }
     p->next = temp;
    }
    }
    return head;
}
void display(struct Node* head) 
{
 struct Node* p = head;
 while(p != NULL) {
   printf("%d ", p->data);
   p = p->next;
  }
}
int countNodes(struct Node* head) 
{
  int count = 0;
  struct Node* p = head;
  while(p != NULL) 
  {
    count++;
    p = p->next;
  }
 return count;
}
void main() 
{
 int n;
 scanf("%d", &n);
 struct Node* head = createList(n);
  display(head);
 int count = countNodes(head);
 printf("\n%d", count);
}
