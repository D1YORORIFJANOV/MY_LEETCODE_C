#include <stdio.h>
#include <stdlib.h>

int minOperations(int* nums, int numsSize){
    int count = 0;
    for(int i = 0; i < numsSize-1; i++)
    {
        if(nums[i] >= nums[i+1])
        {
            count  +=  nums[i]+1 - nums[i+1];
            nums[i+1] = nums[i]+1;
        }
    }

    return count;

}


int main()
{
    int nums[5] = {1,1,1};

    printf("%d\n",minOperations(nums,3));
    return 0;
}