#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



bool palidrom_string(const char *str)
{
    int len = strlen(str);

    for(int i = 0;  i < len/2; i++)
        if(str[i] != str[len - 1- i])return false;
    
    return true;
}


char * firstPalindrome(char ** words, int wordsSize){
    
    for(int i = 0; i < wordsSize; i++)
    {
        if(palidrom_string(words[i]))return words[i];
    }

    return "";
}


int main()
{
   char words[6][10] = {"abc","car","ada","poyga mashinasi","cool"};
    firstPalindrome(words,6);
    return 0;
}