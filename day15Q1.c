// Problem: Given a matrix, calculate the sum of its primary diagonal elements. 
//The primary diagonal consists of elements where row index equals column index.
#include<stdio.h>
void main() 
{
  int m, n;
  printf("Enter the no. of rows and no. of columns:");
  scanf("%d %d", &m, &n);
  int matrix[m][n];
  int sum=0;
  printf("Enter the elements:");
  for(int i=0;i<m;i++) 
  {
   for(int j=0;j<n;j++) 
   {
     scanf("%d", &matrix[i][j]);
    }
  }
  for(int i=0;i<m;i++) 
  {
   for(int j=0;j<n;j++)
   {
    if(i==j)
    sum=sum+matrix[i][j];
   }
   }
  printf("sum= %d", sum);
}