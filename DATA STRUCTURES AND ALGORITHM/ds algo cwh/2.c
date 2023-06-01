#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char arr[200];
    gets(arr);
    int c = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (c == 0)
        {
            if ((arr[i] >= 97) && (arr[i] <= 122))
            {
                printf("%c", arr[i]);
            }
            else if((arr[i] >= 65) && (arr[i] <= 90)){
                  arr[i] = arr[i] + 32;
                printf("%c", arr[i]);

            }
            else if((arr[i] >= 48) && (arr[i] <= 57)){
                printf("%c", arr[i]);
            }
            else
            {
                c = 2;
            }
        }

        else
        {
            if (((arr[i] >= 97) && (arr[i] <= 122)) || ((arr[i] >= 65) && (arr[i] <= 90) || (arr[i] >= 48) && (arr[i] <= 57)))
            {
                if (c == 2)
                {
                    if ((arr[i] >= 48) && (arr[i] <= 57))
                    {
                        c = 1;
                    }

                    else if ((arr[i] >= 97) && (arr[i] <= 122))
                    {
                        arr[i] = arr[i] - 32;
                        c = 1;
                    }
                }
                else
                {
                    if ((arr[i] >= 65) && (arr[i] <= 90))
                    {
                        arr[i] = arr[i] + 32;
                        c = 1;
                    }
                }
            }
            else
            {
                c = 2;
                continue;
            }
            printf("%c", arr[i]);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
