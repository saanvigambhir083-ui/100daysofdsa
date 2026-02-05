#include<stdio.h>
void main()
{ int n;
 printf("Enter the value of n:");
 scanf("%d",&n);
int a1[n+1];
printf("Enter the elements f the array:");
for(int i=0;i<n; i++)
{
scanf("%d", &a1[i]);
 }
int i;
printf("Enter the value of i:");
scanf("%d",&i);
int value;
printf("Enter the value of value:");
scanf("%d",&value);
for(int j=n+1; j>i; j--)
{  a1[j]= a1[j-1];
}
a1[i]= value;
printf("insertion:\n");
for(int j=0;j<n+1; j++)
{
printf("%d ", a1[j]);
 }
 printf("deletion:\n");
 int i2;
printf("Enter the value of i2:");
scanf("%d",&i2);
 for(int j=i2; j<n; j++)
{  a1[j]= a1[j+1];
}
for(int j=0;j<n; j++)
{
printf("%d ", a1[j]);
 }
}