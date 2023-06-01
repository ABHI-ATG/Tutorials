// Q. Write a recursion function  to calcuulate the sum of first 'n' natural number
#include <stdio.h>
int sum(int a);

int main()
{
    int g;
    sum(g);
      printf("ENER THE NUMBER");
     scanf("%d", &g);
    // printf("%d",g);
    return 0;
}
int sum(int a)
{
  
     sum(a);
    if (sum(a == 0))
    {
        return 0;
    }
    else
    {
        return a + sum(a - 1);
    }
}