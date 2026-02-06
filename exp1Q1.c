#include<stdio.h>
int sum(int n, int arr[])
{
 if(n==0)
 {
 return 0;
 }
 return arr[n-1] + sum(n-1 ,arr);
}
void main()
{ int n;
 printf("Enter the value of n:");
 scanf("%d",&n);
int arr[n];
printf("Enter the elements f the array:");
for(int i=0;i<n; i++)
{
scanf("%d", &arr[i]);
}
int s= sum(n, arr);
printf("Sum= %d", s);
}