// WRITE A PROGRAM TO CHECK WEATHER A CHARACTER IS PRESENT IN STRING OR NOT
#include <stdio.h>
#include <string.h>
void hai_ya_nahi(char st[], char y)
{
    char *ptr=st;
    while (*ptr != '\0')
    {
        if (*ptr == y)
        {
            printf("character is present");
        }
        ptr++;
    }
}
int main()
{
    char d;
    printf("ENTER THE CHARACTER");
    scanf("%c", d); char st[] = "abhisinghal";
    hai_ya_nahi(st, d);
    return 0;
}