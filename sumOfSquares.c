#include <stdio.h>
#include <stdlib.h>

int sumOfSquares(int* nums, int numsSize){
  int count = 0;
  for(int i = 1; i <=numsSize; i++)
    if(numsSize % i == 0)
        count += nums[i-1] * nums[i-1];
  
  return count;
}

int main()
{
    int nums[6] = {2,7,1,19,18,3};
    printf("\n%d\n",sumOfSquares(nums,6));
    return 0;
}