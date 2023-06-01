/*WITE A PROGRAM TO FIND THE GREATEST OF FOUR NUMBERS ENTERED
BY USER
*/
#include<stdio.h>
int main()
{
int num1, num2, num3, num4;
printf("enter the first number");
scanf("%d",&num1);
printf("enter the second number");
scanf("%d",&num2);
printf("enter the third number");
scanf("%d",&num3);
printf("enter the fourth number");
scanf("%d",&num4);

if (num1>=num2&&num1>=num3&&num1>=num4)
{printf("num1 is the greatest number");}
else if (num2>=num1&&num2>=num3&&num2>=num4)
{printf("num2 is the greatest number");}
else if (num3>=num2&&num3>=num1&&num3>=num4)
{printf("num3 is the greatest number");}
else if (num4>=num2&&num4>=num3&&num4>=num1)
{printf("num4 is the greatest number");}
}