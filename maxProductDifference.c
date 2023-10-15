#include <stdio.h>
#include <stdlib.h>

int maxProductDifference(int* nums, int numsSize){
    
    int max1 = 0,max2 = 0;
    int min1_index = 0,min2 = 0;

    for(int i = 0; i < numsSize; i ++){

        if(max1  < nums[i]){
            max2 = max1;
            max1 = nums[i];
        }else if(max2 < max1 && max2 < nums[i]){
            max2 = nums[i];
        }

        if(nums[min1_index] > nums[i]){
            min1_index = i;
        }
    }
    min2 = max2;
    for(int i = 0; i < numsSize; i++)
        if( i != min1_index && nums[i]  < min2)
            min2 = nums[i];
    

    return (max1 * max2) - (nums[min1_index] * min2);
}




int main()
{
    int nums[5] = {5,6,2,7,4};

    printf("%d\n",maxProductDifference(nums,5));

}