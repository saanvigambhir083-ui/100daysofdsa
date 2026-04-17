// Problem: Given an array of integers, find two elements whose sum is closest to zero.
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}
void closestToZero(int arr[], int n) {
    int left = 0, right = n - 1;
    int min_sum = arr[left] + arr[right];
    int l = left, r = right;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (abs(sum) < abs(min_sum)) {
            min_sum = sum;
            l = left;
            r = right;
        }
        if (sum < 0)
            left++;
        else
            right--;
    }
    printf("%d %d\n", arr[l], arr[r]);
}
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
     scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    closestToZero(arr, n);
    return 0;
}
