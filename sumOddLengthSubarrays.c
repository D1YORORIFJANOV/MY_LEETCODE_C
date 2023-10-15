#include <stdio.h>
#include <stdlib.h>

 // 0 1 2 3 4  = 4

 // 0 1  == 2 

 // 0  1  2 == 3
 // 10 11 12


int sumOddLengthSubarrays(int* arr, int arrSize){
   int sum = 0, len = 0;
   for(int i = 0; i < arrSize; i++)
   {
    len = 1;
        for(int j = i; j < arrSize; j++,len++)
        {
            if(len % 2 != 0){
                for(int k = i; k < len + i; k ++)
                    sum += arr[k];
            }
        }
   }
   return sum;
}

int main() {
    int num[3] = {10,11,12};

    printf("%d\n",sumOddLengthSubarrays(num,3));
}

