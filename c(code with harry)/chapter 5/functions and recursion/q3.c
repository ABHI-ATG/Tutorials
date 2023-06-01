// FIBONACHII SERIES
// 0,1,1,2,3,5,8,13,21,34.....
#include<stdio.h>
int fib(int a);
int main()

{
    int e,a;
    e = fib(a);
    printf("%d",e);
    return 0;
}
int fib(int a)
{int b;
    printf("ENTER THE NUMBER");
    scanf("%d", &a);
    b=fib(a);
    if (a == 1)
    {
        return 0;
    }
    if (a == 2)
    {
        return 1;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
    
    }
