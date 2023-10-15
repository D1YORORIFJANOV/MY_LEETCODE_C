#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPowerOfTwo(int n){
 
    int sum = 1;
    while (sum *2 <= n)
        sum *= 2;
    
    return  sum == n ? true : false;
}

int main()
{
    printf("%d\n",isPowerOfTwo(3));
    return 0;
}