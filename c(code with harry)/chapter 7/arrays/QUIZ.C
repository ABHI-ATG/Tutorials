// TRY THE ADITTION, SUBTRACTION, SUBTR. FROM ANOTHER POINTER, COMPARISON OF POINTER IN A PROGRAM 
#include<stdio.h>
int main()
{int i=56, k=67,p;
int *j=&i;
int *l=&k;
printf("%d\n",j);
j++;
printf("%d\n",j);
printf("%d\n",l);
p=j-l;
printf("%d\n",p);
}