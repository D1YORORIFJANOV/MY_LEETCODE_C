#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b)
{
    *a  = *a + *b;
    *b = *a - *b;
    *a = *a - * b;
}

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize){
    int sum = 0;
    for(int i = 0; i < seatsSize && i < studentsSize; i++)
    {
        for(int j = i + 1; j < seatsSize && j < studentsSize; j++){
            if(seats[i] > seats[j])
                swap(&seats[i],&seats[j]);
            if(students[i] > students[j])
                swap(&students[i],&students[j]);
        }
    }

    for(int i = 0; i < seatsSize;i++){
        sum += abs(students[i] - seats[i]);
    }

    return sum;
}




int main()
{
    int seats[4] = {2,2,6,6};
    int students[4] = {1,3,2,6};
    int d  = minMovesToSeat(seats,4,students,4);
    printf("%d\n",d);
    for(int i = 0; i < 3; i ++)
        printf("%d ",seats[i]);
    printf("\n");
    for(int i = 0; i < 3; i ++)
        printf("%d ",students[i]);
    printf("\n");
    
    return 0;
}