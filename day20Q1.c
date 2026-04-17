// Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.
#include <stdio.h>
int countZeroSubarrays(int arr[], int n) 
{
    int prefix_sum = 0, count = 0;
    int freq[10000] = {0};  
    int offset = 5000;
    for(int i = 0; i < n; i++) {
        prefix_sum += arr[i];
        if(prefix_sum == 0)
            count++;
        if(freq[prefix_sum + offset] > 0)
            count += freq[prefix_sum + offset];
        freq[prefix_sum + offset]++;
    }
    return count;
}
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int result = countZeroSubarrays(arr, n);
    printf("%d", result);
    return 0;
}
