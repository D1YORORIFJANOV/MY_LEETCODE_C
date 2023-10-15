#include <stdio.h>
#include <stdlib.h>

int* decompressRLElist(int* nums, int numsSize, int* returnSize){
        int count = 0;*returnSize = 0;

        for(int i = 0; i < numsSize; i+=2)*returnSize += nums[i];
        int *arr = (int*)malloc((*returnSize ) * sizeof(int));

        
        for(int i = 0; i < numsSize; i+=2)
            for(int j = 0; j < nums[i]; j++)
                arr[count++] = nums[i+1];

        return arr;
}




int main() {
    int nums[2] = {42,39};
    int *arr = malloc(sizeof(int));
    int len_arr = 0;
    arr = decompressRLElist(nums,2,&len_arr);

    for(int i = 0; i < len_arr; i++){
        printf("%d ",arr[i]);
    }printf("\n");

    return 0;
}