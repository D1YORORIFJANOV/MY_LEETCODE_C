#include <stdio.h>
#include <string.h>


void reverse(char *str)
{   
    int len = strlen(str);
    for(int i = 0; i < len/2; i++)
    {
        str[i] = str[len - 1 - i] + str[i];
        str[len - 1 - i] = str[i] - str[len - 1 - i];
        str[i] = str[i] - str[len - 1 - i];
    }
}

int maximumNumberOfStringPairs(char** words, int wordsSize)
{
    int count = 0;
    for(int i = 0; i < wordsSize; i++)
    {
        reverse(words[i]);
        for(int j = i+1; j < wordsSize; j++)
            if(strcmp(words[i],words[j]) == 0)count++;
    }

    return count;
}



int main()
{
    char* word[5] = {"cd","ac","dc","ca","zz"};

    printf("%d\n",maximumNumberOfStringPairs(word,5));
   return 0;

}