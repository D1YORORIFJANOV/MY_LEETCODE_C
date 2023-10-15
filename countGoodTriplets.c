#include <stdio.h>
#include <stdlib.h>


int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int count = 0;

    for(int i  = 0 ;i < arrSize - 2; i++){

        for(int j = i + 1; j < arrSize-1; j++)
            for(int k = j + 1; k < arrSize; k++)
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <=b && abs(arr[i] -  arr[k]) <= c )count++;
            
    }

    return count;
}



int main()
{
    int nums[9] = {7,3,7,3,12,1,12,2,3};
    printf("%d\n",countGoodTriplets(nums,9,8,5,1));

    return 0;
}