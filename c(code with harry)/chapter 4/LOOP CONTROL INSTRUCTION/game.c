//game


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses;
    srand(time(0));
    number = rand()%100+ 1;
    // printf("the number id %d",number);
// keep running the loop untill the number is guessed
do
{
    printf("ENTER THE NUMBER");
    scanf("%d",&guess);
    
    if (guess>number)
{
    printf("LOWER NUMBER PLEASE\n");}
    if(guess<number)
    {
    printf("HIGHER NUMBER PLEASE\n");}
    else 
    {printf("you guesses it in %d attempts\n",nguesses);

    }
nguesses++;
} while (guess!=number);

    




    return 0;
}