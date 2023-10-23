#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * interpret(char * command){
    char *arr = malloc((strlen(command) + 4));
    unsigned i = 0,c = 0;
    for(i = 0; command[i]; i++)
    {
       if(command[i] == '(' && command[i+1] == ')')
       {
            arr[c++] = 'o';
            i++;
       }else if(command[i] == '(' && command[i+3] == ')')
       {
            arr[c++] = command[i+1];
            arr[c++] = command[i+2];
            i+=3;
       }
       else
       {
           arr[c++] = command[i];
       }
    }
    arr[c] = '\0';
    return arr;
}



int main()
{
    char command[] = "G";
    printf("%s\n",interpret(command));

    return 0;
}