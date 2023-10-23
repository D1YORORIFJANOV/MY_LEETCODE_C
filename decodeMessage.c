#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int find(char *str, char c)
{
    for(int i = 0; i < 26; i++)
        if(str[i] == c)return i;
    
    return -1;
}



bool isStirng(char *str, char c)
{
    for(int i  = 0; i < 26; i++)
        if(str[i] == c)return true;
    
    return false;
}
char * decodeMessage(char * key, char * message){
    char alphabet[26];
    char alphabetKey[26];
    int c = 97;
    unsigned i = 0;
    for(i = 0; i < 26; i++,c++)
        alphabet[i] = c;
    
    
    for( i = 0,c = 0 ;key[i]; i++)
        if(!isStirng(alphabetKey,key[i]) && key[i]!= ' ')
            alphabetKey[c++] = key[i];
            
    for(int i = 0; i < 26; i++)
        printf("%c",alphabet[i]);
    printf("\n");

     for(int i = 0; i < 26; i++)
        printf("%c",alphabetKey[i]);
    printf("\n");

    for ( i = 0; message[i]; i++)
        if(message[i] != ' '){
            c = find(alphabetKey,message[i]);
            
            message[i] = alphabet[c];
        }
        
    
    return message;
}


int main()
{
    char key[] = "eljuxhpwnyrdgtqkviszcfmabo";
    char message[] = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";

    printf("\n%s\n",decodeMessage(key,message));
    return 0;
}