#include <stdio.h>
#include <stdlib.h>


void reverseString(char* s, int sSize){

    for(int i = 0; i < sSize/2; i++)
    {
        int temp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize- i - 1] = temp;
    }
}


int main()
{
    char s[] = {'H','e','l','l','o'};
    reverseString(s,5);
    for(int i = 0; i < 5; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}