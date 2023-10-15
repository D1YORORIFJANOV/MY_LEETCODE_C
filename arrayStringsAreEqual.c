#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size){
    unsigned int word1_sum = 0,word2_sum = 0;

    for(int i = 0; i < word1Size; i ++)
        for(int j = 0;word1[i][j];++j)
            word1_sum = word1_sum * 10 + word1[i][j];


    for(int i = 0; i < word2Size; i++)
        for(int j = 0; word2[i][j]; j++)
            word2_sum = word2_sum  * 10 + word2[i][j];


    return (word1_sum == word2_sum) ? true : false;
}



int main() {
    char *word1[2] = {"a","cb"};
    char *word2[2] = {"ab","c"};
    printf("%d\n",arrayStringsAreEqual(word1,2,word2,2));
    return 0;
}