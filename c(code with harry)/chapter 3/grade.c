// conditional instruction

#include<stdio.h>
#include<conio.h>
void main()
{
    float eng, maths, phy, chem, pe, total, average;
    printf("enter the marks of phy");
    scanf("%f",&phy);
     printf("enter the marks of maths");
     scanf("%f",&maths);
      printf("enter the marks of chem");
      scanf("%f",&chem);
       printf("enter the marks of eng");\
       scanf("%f",&eng);
        printf("enter the marks of pe");
        scanf("%f",&pe);
        total=phy+chem+maths+eng+pe;
        average=total/5;
        if
            (average>=80)
        
        {printf("GRADE A");
        }
        else
          {  printf("GRADE B");
          }
          getch();
          }
