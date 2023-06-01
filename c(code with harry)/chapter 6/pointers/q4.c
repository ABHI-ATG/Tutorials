// WRITE A PROGRAM USING A FUNCTION WHICH CAL. THE SUM AND AVERAGE OF TWO NO. 
// USE POINTERS AND PRINT THE VALUES OF SUM AND AVERAGE IN MAIN
#include<stdio.h>
int sum_and_avg(int a, int b, int *sum, float *avg);
int main()
{int x=4,y=6,g;
float h;
sum_and_avg(4,6,&g,&h);
printf("the sum and average is %d and %f",g,h);    
}int sum_and_avg(int a, int b, int *sum, float *avg){ 
    *sum=a+b;
    *avg=(float)(*sum)/2;
}