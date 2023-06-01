#include <stdio.h>

int main()
{
    // char str[]="abhi";
    char str[] = {'a', 'b', 'h', 'i', '\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }
    // puts(str);
    
    return 0;
}