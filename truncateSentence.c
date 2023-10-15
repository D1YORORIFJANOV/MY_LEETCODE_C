#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * truncateSentence(char * s, int k){
        int len_s = 0;

        for(len_s = 0; s[len_s]; len_s++){

            if(s[len_s] == ' ')k--;
            if(k == 0)break;
        }

        s[len_s] = '\0';
        return s;
}

int main() {
    char s[29] = "Hello how are you Contestant";
    char *t = truncateSentence(s,4);
    printf("%s\n",t);
    return 0;
}