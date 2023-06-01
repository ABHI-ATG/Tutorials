//game


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100+ 1;
    printf("the number id %d",number);

    




    return 0;
}