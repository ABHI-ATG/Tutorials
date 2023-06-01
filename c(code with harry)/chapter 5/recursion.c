//RECURSION- function contain itself(function)
//best example of recursion is factorail vala question
#include <stdio.h>
int factorial(int a);

int main()
{
    int b ;
    printf("ENTER THE VALUE");
    scanf("%d", &b);
    printf("the value of %d is %d", b, factorial(b));
    return 0;
}
int factorial(int a)
{printf("calling  factorial is %d\n", a);
   
    if (a == 0 || a == 1)
        return 1;
    else
    {
        return a * factorial(a - 1);
         
    }
}