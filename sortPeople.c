#include <stdio.h>
#include <stdlib.h>

char ** sortPeople(char ** names, int namesSize, int* heights, int heightsSize, int* returnSize){
        *returnSize  = heightsSize;
        void*temp;
        for(int i = 0; i < namesSize; i++)
        {
            for(int j = i+1; j < namesSize; j++)
            {
                if(heights[i]  < heights[j])
                {
                    temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;

                    int d = heights[i];
                    heights[i] = heights[j];
                    heights[j] = heights[i];


                }
            }
        }

    return names;
}

int main()
{
    return 0;
}