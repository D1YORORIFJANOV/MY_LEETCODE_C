#include <stdio.h>

int maxProduct(int* nums, int numsSize){
    int max1 = 0,max2 = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(max1  < nums[i]){
            max2 = max1;
            max1 = nums[i];
        }else if(max2 < nums[i]) 
            max2 = nums[i];
    }
    
    return (max1-1) * (max2-1);
}



// 12 34 56 33 46 56 33 23 45 44 
int main()
{

    int nums[4]  = {3,4,5,2};
    printf("%d\n",maxProduct(nums,4));

    return  0;
}