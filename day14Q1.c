// Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix
// in which all diagonal elements are 1 and all non-diagonal elements are 0.
#include<stdio.h>
void main() 
{
    int n;
    printf("Enter the number of rows and columns:");
    scanf("%d", &n);
    int matrix[n][n];
    int f=1;
    for(int i=0;i<n;i++) 
    {
      for(int j=0;j<n;j++) 
      {
       scanf("%d", &matrix[i][j]);
      }
    }
    for(int i=0; i<n;i++) 
    {
      for(int j=0;j<n;j++) 
      {
       if(i==j) 
       {
        if(matrix[i][j] != 1) 
        {
         f=0;
         break;
        }
       } 
       else 
       {
         if(matrix[i][j] != 0) 
         {
          f=0;
          break;
         }
        }
     }
     if(f==0)
     break;
    }
    if(f==1)
     printf("Identity Matrix");
    else
     printf("Not an Identity Matrix");
}