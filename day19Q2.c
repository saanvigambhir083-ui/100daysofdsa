//Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
int maxSubarraySumCircular(int* nums, int numsSize) 
{
 int total = 0; 
    int currMax = 0, maxSum = nums[0];
    int currMin = 0, minSum = nums[0];
    for (int i = 0; i < numsSize; i++) 
    {
        if (currMax + nums[i] > nums[i])
        currMax = currMax + nums[i];
        else
        currMax = nums[i];
        if (currMax > maxSum)
        maxSum = currMax;
        if (currMin + nums[i] < nums[i])
        currMin = currMin + nums[i];
        else
        currMin = nums[i];
        if (currMin < minSum)
        minSum = currMin;
        total += nums[i];
    }
    if (maxSum < 0)
    return maxSum;
    return (maxSum > (total - minSum)) ? maxSum : (total - minSum);    
}
