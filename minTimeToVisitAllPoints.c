#include <stdio.h>
#include <stdlib.h>



int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    *pointsColSize = 2;
    int result = 0,x = 0,y = 0;

    for(int i = 0; i < pointsSize-1; i++)
    {
        x = abs(points[i][0] - points[i+1][0]);
        y = abs(points[i][1] - points[i+1][1]);

        result += (x > y)? x:y;
    }

    return result;
}


int main()
{
    int nums[3][3];
    return 0;
}