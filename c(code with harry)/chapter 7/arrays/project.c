// write a program to enter the marks of 5 students using loops and arrays 
#include<stdio.h>
int main()
{int marks [5];
for (int i=0; i<5 ; i++)
{
    printf("enter the marks of students %d\n",i+1);
    
       scanf("%d",&marks[i]); 
       printf("\n");
       printf("the marks of student %d is : %d\n",i+1,marks[i]);
}
    
}