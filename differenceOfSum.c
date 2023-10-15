#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int differenceOfSum(int* nums, int numsSize){
        int sum_num = 0,sum_num2 = 0;

        for(int i = 0; i < numsSize; i++){
            sum_num += nums[i];
            
            while(nums[i]){
                sum_num2 += nums[i]% 10;
                nums[i]/=10;
            }
        }

        return  (sum_num2 > sum_num) ? sum_num2 - sum_num : sum_num - sum_num2;
}


int main()
{
    int nums[4] = {1,15,6,3};
    printf("%d\n",differenceOfSum(nums,4));
}