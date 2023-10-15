#include <stdio.h>
#include <stdlib.h>


void swap(int *arr, int s, int e ){
    for(int i = s;  i > e; i--){
        arr[i] = arr[i]  + arr[i-1];
        arr[i-1] = arr[i] - arr[i-1];
        arr[i] = arr[i] - arr[i-1];
    }
       
}

int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int *arr = malloc(sizeof(int) * numsSize);
    for(int i = 0; i < numsSize; i++)
        arr[i] = nums[i];


    for(int i = 0; i < indexSize; i++){
        
        swap(arr,i,index[i]); 
    }

    *returnSize = numsSize;
    return arr;
}

int main() {
    int nums[5] = {1,2,3,4,0};
    int index[5] = {0,1,2,3,0};
    int *arr = malloc(sizeof(int));
    int len_arr = 0;
    arr = createTargetArray(nums,5,index,5,&len_arr);

    for(int i = 0 ;i < len_arr; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

 




    return  0;
}