// a++

#include<stdio.h>

int main()
{
    int a=15;
    while(a>10)
    {printf("--a=%d",--a);}
    /*  a++ = pehle print fir increament
    ++a= pehle increament fir print
*/
a+=10;
printf("%d",a);
    return 0;
}