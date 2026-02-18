// Problem: Given an array of integers, rotate the array to the right by k positions.
#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int r;
    printf("Enter number of rotations: ");
    scanf("%d", &r);
    for(int i=1; i<=r; i++)
    {    int temp= arr[n-1];
        for(int j=n-1; j>0; j--)
        {
         arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
     for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}