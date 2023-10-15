#include <stdint.h>
#include <stdlib.h>


// void swap_int(int *param, int param_length)
// {
//     int temp = 0;
//     for(int i = 0; i < param_length/2; i++)
//     {
//         temp = param[i];
//         param[i] = param[param_length - 1 - i];
//         param[param_length - 1 - i] = temp;
//     }
// }



int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes){
    *returnSize = imageSize;
    *returnColumnSizes = *imageColSize;
    int temp =0,i,j;

    for( i = 0; i < imageSize; i++)
    {
        for(j = 0; j < *imageColSize / 2; j ++){
            temp = image[i][j];
            image[i][j] = image[i][*imageColSize - 1 - j];
            image[i][*imageColSize - 1 - j] = temp;
        }
    }

      for( i = 0; i < imageSize; i++)
      {
        for(j = 0; j < *imageColSize ; j ++)
        {
               if(image[i][j] == 0)image[i][j]++;
               else image[i][j]--; 
        }
        
      }

      return image;
}

int main()
{

   

    return 0;
}