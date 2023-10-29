#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *arr = malloc(sizeof(int) * (digitsSize + 1)),i = 0;
    *returnSize = digitsSize;
    for(i = 0 ; i <digitsSize; i++ )
        arr[i] = digits[i];
    

    for(i = digitsSize-1; i > 0; i--)
    {
        if(arr[i]+1 >= 10)
        {
            arr[i] = 0;
            continue;
        }
        break;
    }

    if(arr[i]+1 >= 10)
    {
        arr[i] = 1;
        arr[digitsSize+1] = 0;
        *returnSize += 1;
    }
    else arr[i]+=1;
    

    return arr;
}


int main()
{
    int digits[1] = {9};
    int len  = 0;
    int * b = plusOne(digits,1,&len);
    for(int i = 0; i < len; i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}