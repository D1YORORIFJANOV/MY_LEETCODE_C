#include <stdio.h>
#include <stdlib.h>

int* decode(int* encoded, int encodedSize, int first, int* returnSize){
    *returnSize = encodedSize+1;
    int *arr = malloc((encodedSize+1) * sizeof(int));
   
    arr[0] = first;
    for(int i  = 0; i < encodedSize; i++){
       arr[i+1] = arr[i]^ encoded[i];
    }
    

    return arr;
}

int main() {
    int num[4] = {6,2,7,3};
    int *arr = malloc(sizeof(int));
    int len_arr = 1;
    arr = decode(num,4,4,&len_arr);

    for(int i = 0; i < len_arr; i++)
        printf("%d ",arr[i]);
  
    return 0;
}