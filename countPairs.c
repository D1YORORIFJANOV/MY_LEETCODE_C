#include <stdio.h>
#include <stdlib.h>


int countPairs(int* nums, int numsSize, int k){
    int count = 0;
    for(int i  = 0; i < numsSize; i++)
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
                if((i * j) % k == 0)count++;
                   
        }
    }

    return count;
}


int main()
{

    int nums[4] = {1,2,3,4};
    printf("%d\n",countPairs(nums,4,1));

    return 0;
}