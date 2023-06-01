#include <stdio.h>

int main()
{
    int a, b = 2, c=1;
    printf("ENTER THE NUMBER");
    scanf("%d", &a);
    for(int b=2; b<a; b++)
    {
c=a%b;
printf("%d\n",b);
break;
    }
    if (c == 0)
   
{
        printf("not prime");
        
}
    else
    {  
        printf("prime");
    }
    return 0;
}