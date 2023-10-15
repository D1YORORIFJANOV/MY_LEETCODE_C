#include <stdio.h>
#include <stdlib.h>


int maximizeSum(int* nums, int numsSize, int k){\
    int max,sum = 0;
    for(int i = 0; i < numsSize; i++)
        if(max < nums[i])max = nums[i];

    for(int i = 0; i < k; i++)
        sum += max++;

    return sum; 
}



int main()
{
    int nums[3] = {5,5,5};

    printf("%d\n",maximizeSum(nums,3,2));
    return 0;
}