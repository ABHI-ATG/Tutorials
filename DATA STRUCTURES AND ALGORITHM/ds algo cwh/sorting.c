#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                c++;
            }
        }
        arr2[c]=arr[i];
    }
      for (int i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }
    return 0;
}