//Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
typedef struct Node 
{
    int val;
    struct Node* next;
} Node;
typedef struct 
{
    Node* head;
    int size;
} MyLinkedList;
Node* createNode(int val) 
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->val=val;
    newNode->next=NULL;
    return newNode;
}
MyLinkedList* myLinkedListCreate() 
{
 MyLinkedList* obj=(MyLinkedList*)malloc(sizeof(MyLinkedList));
 obj->head=NULL;
 obj->size=0;
 return obj;
}
int myLinkedListGet(MyLinkedList* obj, int index) 
{
 if (index<0||index>=obj->size)
  return -1;
 Node* temp=obj->head;
 for(int i=0;i<index;i++) 
 {
   temp=temp->next;
 }
 return temp->val;
}
void myLinkedListAddAtHead(MyLinkedList* obj, int val) 
{
 Node* newNode=createNode(val);
 newNode->next=obj->head;
 obj->head=newNode;
 obj->size++;
}
void myLinkedListAddAtTail(MyLinkedList* obj, int val) 
{
 Node* newNode=createNode(val);
 if (obj->head==NULL) 
 {
    obj->head=newNode;
 } 
 else 
 {
  Node* temp=obj->head;
  while (temp->next!=NULL) 
  {
    temp=temp->next;
  }
  temp->next=newNode;
 }
 obj->size++;
}
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) 
{
 if(index<0||index>obj->size) 
 return;
 if(index==0) 
 {
   myLinkedListAddAtHead(obj, val);
    return;
 }
 Node* newNode=createNode(val);
 Node* temp=obj->head;
 for (int i=0;i<index-1;i++) 
 {
   temp=temp->next;
 }
 newNode->next=temp->next;
 temp->next=newNode;
 obj->size++;
}
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) 
{
 if(index<0||index>=obj->size) 
 return;
Node* temp=obj->head;
 if (index==0) 
 {
   obj->head=temp->next;
    free(temp);
 } 
 else 
 {
   for (int i=0;i<index-1;i++) 
   {
    temp=temp->next;
   }
  Node* delNode=temp->next;
  temp->next=delNode->next;
  free(delNode);
 }
 obj->size--;
}
void myLinkedListFree(MyLinkedList* obj) 
{
 Node* temp=obj->head;
 while (temp!=NULL) 
 {
 Node* nextNode=temp->next;
   free(temp);
   temp=nextNode;
 }
 free(obj);
}   
