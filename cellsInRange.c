#include <stdio.h>
#include <stdlib.h>

char ** cellsInRange(char * s, int* returnSize){
    unsigned len = (s[3] + 1) - s[0], i =0,index = 0;
    len = len * ((s[4] - '0')  - (s[1] - '0') + 1);
  
    *returnSize = len;
    char cstart = s[1];
  
    char** arr = (char**)malloc(len * sizeof(char*));

    for(i = 0; i < len; i++)
        arr[i] = (char*)malloc(3 * sizeof(char));
    
    for(i = 0; i < len; i ++)
        arr[i][2] = '\0';
    

    for(i = 0; i < len; i++)
    {
       if(cstart > s[4])
       {
        s[index]++;
        cstart = s[1];
       }
       arr[i][0] = s[index];
       arr[i][1] = cstart++;
    }
    
    return arr;
}



int main()
{
    char s[] = "K1:L2";
    int d = 0;
    cellsInRange(s,&d);

    return 0;
}