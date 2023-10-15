#include <stdio.h>
#include <stdlib.h>


int* leftRightDifference(int* nums, int numsSize, int* returnSize){
      int numleft[numsSize],numrigth[numsSize];
      int *arr = malloc(sizeof(int) * numsSize);
      int sum_numleft = 0,sum_numright = 0;

      int index_numright = numsSize - 2;
      numleft[0] = 0;
      numrigth[index_numright+1] = 0;

      for(int i = 1; i  < numsSize; i ++,index_numright--){
        numleft[i] = sum_numleft + nums[i-1];
        sum_numleft += nums[i-1];

        numrigth[index_numright] = sum_numright + nums[index_numright + 1];
        sum_numright += nums[index_numright +1];
      }


     for(int i = 0; i < numsSize; i++)
        arr[i] = (numleft[i] > numrigth[i]) ? numleft[i] - numrigth[i]: numrigth[i] - numleft[i];
     
     *returnSize = numsSize;
     
     return arr;
}


int main (){
        int nums[4] = {10,4,8,3};
        int *arr = malloc(sizeof(int));
        int len = 0;

        arr = leftRightDifference(nums,4,&len);

        for(int i = 0; i < len; i++)
            printf("%d ",arr[i]);
        
        printf("\n");
}