//WRITE A PROGRAM OF SIZE 3*10 CONTAININGMULTIPLICATION TABLE OS ,2,4,8 RESPECTIVELY
#include <stdio.h>

int main()
{
    int arr[3][10];
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        arr[1][i] = 4 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        arr[2][i] = 8 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[0][i]);
    }
    printf("*************************************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[1][i]);
    }
    printf("*************************************\n");

    for (int i =0; i < 10; i++)
    {
        printf("%d\n", arr[2][i]);
    }
    printf("*************************************\n");

    return 0;
}