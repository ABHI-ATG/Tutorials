// write a program having a variable i. print the adress. PASS THIS VARIABLE TO A FUNCTION 
//AND PRINT ITS its adress. are the adress same?

#include<stdio.h>
 void printadd(int a){
     printf("the adress of a is %u",&a);
 }
int main()
{int i=4;
int *j=&i;
printf("%u",j);
printadd(i);
printf("the adress of i is %u",&i);
    return 0;
}