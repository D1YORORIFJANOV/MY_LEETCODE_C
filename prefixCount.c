#include <stdint.h>
#include <stdlib.h>

int prefixCount(char ** words, int wordsSize, char * pref){
    long unsigned prefSum = 0,sum = 0;
    unsigned count = 0;
    for(int i = 0;pref[i]; i++)
    {
        prefSum = prefSum * 10 + pref[i];
    }

    for(int i = 0; i < wordsSize; i++ )
    {

    }
}

int main()
{
    return 0;
}