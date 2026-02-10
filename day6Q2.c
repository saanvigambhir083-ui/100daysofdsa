// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
void moveZeroes(int* nums, int numsSize) 
{   int c=0;
    for(int i=0; i<numsSize; i++)
    {
     if(nums[i]!=0)
     {
       nums[c]=nums[i];
       c++;
     }
    }
    while(c<numsSize)
    {nums[c]=0;
    c++;
    }
}