// for loop
#include <stdio.h>

int main()
{
    int arr[6], l, m,n;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    l = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (l <= arr[i])
        {
            l = arr[i];
            // m=i;
        }
    }
    printf("%d", l);
    //  n=arr[5-m];
    n=arr[1];
    for(int i=0;i<6;i++){
       if((n<=arr[i])&&(n<l)){
           n=arr[i];
       }
    }
printf("\n%d",n);

    return 0;
}