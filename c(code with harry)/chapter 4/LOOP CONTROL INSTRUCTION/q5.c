// write a program to check weather a number is prime or not
#include<stdio.h>

int main()
{
    int a, prime=1;
printf("ENTER THE NUMBER");
scanf("%d",&a);
for(int i=2;i<a;i++)
{ if (a%i==0){
    prime=0;
    break;}
}
if (prime==0){
printf("this is not a prime number");}
else
{printf("this is a prime number");
}
return 0;
    
}