#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int countKDifference(int* nums, int numsSize, int k){
    int count = 0;
    for(int i = 0; i < numsSize; i++)
        for(int j = i+1; j  < numsSize; j++)
            if(nums[i] - nums[j] == k || nums[j]  - nums[i] == k)
                count++;

    
    return count;
}



int main()
{
    int nums[5] ={3,2,1,5,4};
    printf("%d\n",countKDifference(nums,5,2));

    return 0;
}