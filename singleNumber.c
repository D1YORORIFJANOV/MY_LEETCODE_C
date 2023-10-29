#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize){
    // int temp_count = 0,count = 0,dublicat = nums[0],i,j;
    // for(i = 0; i < numsSize; i++)
    // {
    //     temp_count = 0;
    //     for(j = 0; j < numsSize; j++)
    //     {
    //         if(i !=j && nums[i] == nums[j])temp_count++;
    //     }
    //     if(i == 0)count = temp_count;
    //     else if(count > temp_count)
    //     {
    //         count = temp_count;
    //         dublicat = nums[i];
    //     }
    // }
    // return dublicat;

      int ans =0;
        for(int i=0;i< numsSize;i++){
            ans = ans^nums[i];
        }
        
        return ans;
} 




int main()
{
    int num[3] = {2,-1,2};
    printf("%d\n",singleNumber(num,3));
    return 0;
}