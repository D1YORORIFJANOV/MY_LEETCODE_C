#include <stdio.h>


int arithmeticTriplets(int* nums, int numsSize, int diff){
    int count = 0;
    for(int i = 0; i < numsSize; i++)
        for(int j  = 0; j < numsSize; j++)
                    if(nums[i] - nums[j] == diff){
                        for(int k = 0; k < numsSize; k++){
                            if(nums[j] - nums[k] == diff){
                                count++;
                                break;   
                            } 
                        }
                      }

    return count;              
}


int main(){
     int nums[6] = {4,5,6,7,8,9};
     printf("%d\n",arithmeticTriplets(nums,6,2));

    int son  = 121;

    if((son / 10)%10  != son % 10 && (son / 10)%10  != son /100 && son % 10 != son / 100){
        printf("Rost jalab\n");
    }else
        printf("Yolgon jalab qanchiq\n");

    return 0;
}