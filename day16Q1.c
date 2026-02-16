// Problem: Given an array of integers, count the frequency of each distinct element and print the result.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=9;i++)
    { int c=0;
     for(int j=0; j<n; j++)
    {
      if(arr[j]==i)
      c++;
     }
     if(c!=0)
     printf("%d:%d ",i,c);
    }
}