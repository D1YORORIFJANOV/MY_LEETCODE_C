#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int diagonalSum(int mat[3][3], int matSize, int* matColSize){
    *matColSize = matSize;
    int sum  =  0;
    for(int i = 0; i  < matSize; i++){
        sum += mat[i][i];
        sum += mat[i][matSize - i - 1];
    }

    return (matSize % 2 == 0) ? sum : sum - mat[matSize/2][matSize/2];
}





int main()
{
     int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
     };
     int len = 0;

     printf("%d\n",diagonalSum(mat,3,&len));

    return 0;
}