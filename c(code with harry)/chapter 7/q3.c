// WRITE A PROGRAM TO CREATE An ARRAY OF 10 INTEGER AND STORE MULTPLICATION TABLE OF 'n' IN IT
#include <stdio.h>

int main()
{
    int arr[10], n;
    printf("ENTER THE NUMBER");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
        printf("%d*%d=%d\n",n, i + 1, arr[i]);
    }
}
