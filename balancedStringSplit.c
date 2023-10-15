#include <stdio.h>
#include <stdlib.h>

int balancedStringSplit(char * s){
  unsigned count = 0,cR = 0,cL = 0;
  for(unsigned i = 0; s[i]; i++)
  {
    (s[i] == 'R') ? cR++: cL ++;
 
    if(cR == cL)
        count++;
    
  }
  return count;
}



int main()
{
    char name[] = "RLRRRLLRLL";
    printf("%d\n",balancedStringSplit(name));

    return 0;
}