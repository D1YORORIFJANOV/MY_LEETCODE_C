#include <stdio.h>
#include <stdlib.h>


int findGCD(int* nums, int numsSize){
    int max = 0,min = nums[0],mod = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(max < nums[i])max = nums[i];
        if(min > nums[i])min = nums[i];
    }
    mod = max % min;
    while (mod!=0)
    {
        max = min;
        min = mod;
        mod = max % min;
    }
    return min;
}


int main()
{
    int nums[5] = {3,5,6,9,10};
    printf("%d\n",findGCD(nums,5));
    return 0;
}