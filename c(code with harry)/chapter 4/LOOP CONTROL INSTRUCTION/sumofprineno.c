#include <stdio.h>
int main()
{
    int att, range, sum, flag;
    
        scanf("%d", &range);
        sum = 0;
        for (int i = 2; i < range; i++)
        {
            flag = 0;
            for (int k = 2; k <= i; k++)
            {
                if (i % k == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                sum = sum + i;
            }
        }
        printf("%d", sum);
     
    return 0;
}