#include <stdio.h>
#include <stdlib.h>


int smallestEvenMultiple(int n){
   int sum = n;
   while(sum % 2 != 0)sum+=n;

   return sum;
}

int main()
{
    printf("%d\n",smallestEvenMultiple(6));
    return 0;
}