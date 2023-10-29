#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myAtoi(char * s){
    int c = 1, sum = 0,j = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= '0'&& s[i] <= '9')
        {
            if(s[i-1] == '-')
                c = -1;
            j  = i;
            while (s[j] >= '0' && s[j] <= '9' && s[j] != '\0')
            { 
                sum  = sum * 10 + (s[j] - '0');
                j++;
            }
            break;
        }
    }
  

    return sum * c;
}


int main()
{
    char s[] = "4193 with words";
    printf("%d\n",myAtoi(s));
    return 0;
}
