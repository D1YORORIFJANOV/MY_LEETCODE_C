#include <stdio.h>
#include <stdlib.h>


void sortColors(int* nums, int numsSize){

    for(int i = 0; i  < numsSize; i++)
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if(nums[i] > nums[j])
            {
                int temp  = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main()
{
    return 0;
}