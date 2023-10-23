#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool repeatedSubstringPattern(const char * s){
    int len=strlen(s);
    int j;
  for (int i = 1; i <= len / 2; i++) {
        if (len % i == 0) {
            int isRepeated = 1;
            for (int j = i; j < len; j++) {
                if (s[j] != s[j - i]) {
                    printf("%c == %c\n",s[j],s[j-i]);
                    isRepeated = 0;
                    break;
                }
            }
            if (isRepeated) {
                return true;
            }
        }
    }

    return false; // No repeated substring found
}

int main()
{
    char str[] = "abcabcabcabc";
    printf("%d\n",repeatedSubstringPattern(str));
    return 0;
}