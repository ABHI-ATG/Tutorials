// OPERATOR PREECEDENCE
#include <stdio.h>

int main()
{
    int x = 4, y = 9;
    printf("the value of 3*x-8*y is %d \n", 3 * x - 8 * y);
    /* priority
    1. * , / , %
    2. + , -
    3. =
 */
printf("the value of 3*x/4*y is %d", 3*x/4*y);
}