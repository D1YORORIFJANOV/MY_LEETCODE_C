#include <stdio.h>
#include <stdlib.h>

int countNegatives(int** grid, int gridSize, int* gridColSize){
    int count = 0,j = 0;

    for(int i = 0; i < gridSize; i++)
    {
        j = *gridColSize-1;
        while (grid[i][j--] < 0)
            count++;
    }


    return count;
}