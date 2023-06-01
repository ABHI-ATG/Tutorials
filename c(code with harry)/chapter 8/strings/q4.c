//slicing = tukde karna array ke
#include <stdio.h>
// #include<string.h>
void hog(char st[], int b,int n)
{
    // int a = 0;
char *ptr=st;
    while (*ptr!= '\0'||(b)<n)
    {
        ptr= ptr[b];
        a++;
        b++;
        // printf("%s")
    }
    int main()
    {
        char c;
        char st[] = "abhijskadhfs";
        c = hog(st, 5,12);
        printf("%s", c);
        return 0;
    }