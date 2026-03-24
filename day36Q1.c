// Problem: Circular Queue Using Array - Implement using linked list with dynamic memory allocation.
// Input:
// - First line: integer n (number of elements to enqueue)
// - Second line: n space-separated integers
// - Third line: integer m (number of dequeue operations)
// Output:
// - Print queue elements from front to rear after operations, space-separated
#include<stdio.h>
void enqueue(int queue[], int n) 
{
    for(int i=0;i<n;i++) 
    {
     scanf("%d",&queue[i]);
    }
}
void dequeue(int *front, int n, int m) 
{
 for(int i=0;i<m;i++) 
 {
 *front = (*front + 1) % n;
 }
}
void display(int queue[], int front, int rear, int n) 
{
  int i = front;
  while(1) 
  {
    printf("%d ", queue[i]);
    if(i == rear)
    break;
     i = (i + 1) % n;
  }
}
int main() 
{
 int n, m;
 scanf("%d", &n);
 int queue[n];
 enqueue(queue, n);
 scanf("%d", &m);
 int front = 0;
 int rear = n - 1;
 dequeue(&front, n, m);
 display(queue, front, rear, n);
 return 0;
}
