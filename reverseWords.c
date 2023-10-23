#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *str, int start, int end)
{
    for(int i = end; i > start; i--)
    {
        char c = str[i];
        str[i] = str[start];
        str[start] = c;
        start++;
    }
    
}

char * reverseWords(char * s){
    int start = 0;
    for(int i = 0; i <= (int)strlen(s); i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            swap(s,start,i-1);
            start = i+1; 
        }
    }

    return s;
}

int main()
{
    char s[] = "Let's take LeetCode contest";
    printf("%s\n",reverseWords(s));
    
    return 0;
}