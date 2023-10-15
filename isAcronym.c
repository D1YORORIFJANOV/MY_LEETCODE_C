#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include  <stdbool.h>


bool isAcronym(char ** words, int wordsSize, char * s){
    if(wordsSize != (int)strlen(s))return false;
    int words_num = 0,word_num = 0;
    for(int i = 0; i < wordsSize; i++){
        words_num = words_num * 10 + words[i][0];
        word_num = word_num * 10 + s[i];
    }
    return (word_num != words_num)? false : true;
}

int main()
{
    char *words[] = {"a","jqfqicuzb","fgbbgei","zj","wbncvm","u","ey","wrsfvhje","djgef"};
    char word[] = "ajfzwuewdsd";
    printf("%d\n",isAcronym(words,9,word)); 

    return 0;
}