#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int largestAltitude(int* gain, int gainSize){
    int sum = 0,max = 0;
    int i;
    for(i = 0; i < gainSize; i++)
    {
        sum += gain[i];
        gain[i] = sum;
        if(max < sum)max = sum;    
    }
   
   return max;
}


int main()
{
    int gain[7] = {-4,-3,-2,-1,4,3,2};
    int max = largestAltitude(gain,7);

    printf("%d\n",max);
    return 0;
}