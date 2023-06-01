//WRITE A PROBLEM CONTAINING A FUNCTION WHICH REVERSE THE ARRAY PASSED IN IT
#include <stdio.h>
int rev(int *a, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    rev(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}