//WRITE A PROGRAM WHICH CALCULATE THE NUMBER OF POSITIVE INTEGER IN AN ARRAY
#include <stdio.h>

int main()
{
    int array[] = {23, 4, -2, 23, 46, -43, -22, 3 ,0};
    for (int i = 0; i < 9; i++)
    {
        if (array[i] >= 0)
        {
            printf("%d is positive\n", array[i]);
        }
        else
        {
            printf("%d is not positive\n", array[i]);
        }
    }
}