#include <stdio.h>


int check(const char c, const char *str)
{
    for(int i = 0; str[i]; i++)
    {
        if(c == str[i])return i;
    }

    return -1;
}




int countConsistentStrings(char * allowed, char words[7][3], int wordsSize){
    int count = 0;

    for(int i = 0; i < wordsSize; i++){

        for(int j = 0; j < words[i][j]; j++)
        {
            if(check(words[i][j], allowed) == -1)count++;
        }
    }

    return  wordsSize- count;
}  
   
int main()
{
   char ab[] = "abc";
   char word[7][3] = {"a","b","c","ab","ac","bc","abc"};
   printf("%d\n",countConsistentStrings(ab,word,7));
    return 0;
}